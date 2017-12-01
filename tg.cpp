#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int trigram(string language){
    int freqS[19683] = {0};
    for(int i = 0; i < (int)language.length()-2; i++){
        int trigram = language[i] * 27^2 + language[i+1] * 27 + language[i+2];
        freqS[trigram]++;
    }
    return freqS;
}
char aplha27(char x){

}
double distance(double pointA, double pointB, unsigned int lvec)
{
    double x = 0.0, y = 0.0, z = 0.0 ;
     for(unsigned int i = 0; i < lvec; i++) {
        x += pointA[i] * pointB[i] ;]
        y += pointA[i] * pointA[i] ;
        z += pointB[i] * pointB[i] ;
    }
    return x / (sqrt(y) * sqrt(z)) ;
}

//trigram, freqS
//main
