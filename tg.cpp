#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>
#include "tg.h"
using namespace std;

Lang::Lang(string language){
    freq = new int[len];
    trigram(language);
}

Lang::~Lang(){
    delete[] freq;
}

void Lang::trigram(string language){
    for(int i = 0; i < (int)language.length()-2; i++){
        int trigram = 0;
        trigram += (language[i]-96) * 27^2;
        trigram += (language[i+1]-96) * 27;
        trigram += (language[i+2]-96);
        freq[trigram]++;
    }
}

void Lang::print() {
    for(int i = 0; i <len; i++){
        cout<<freq[i]<< " ";
    }
    cout<<endl;
}

/*
double Lang::distance(double pointA, double pointB, unsigned int lvec){
    double x = 0.0, y = 0.0, z = 0.0;
     for(unsigned int i = 0; i < lvec; i++) {
        x += pointA[i] * pointB[i];
        y += pointA[i] * pointA[i];
        z += pointB[i] * pointB[i];
    }
    return x / (sqrt(y) * sqrt(z));
}
*/
