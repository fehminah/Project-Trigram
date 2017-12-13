//Name: Eunice Arokiadoss and Fehmina Hasan

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>
#include "tg.h"
using namespace std;

//contructor
Lang::Lang(string language){
    freq = new int[len]; //variable that initializes the array
    //variable that initializes the array to all 0's
    for (int i=0; i < len; i++) {
        freq[i] = 0;
    }
    trigram(language);
}

//destructor
Lang::~Lang(){
}

//gets the each element trigram in each language
int Lang::getArray(int i ){
    return freq[i];
}
//getter function
int Lang::getLen(){
    return len;
}

//void function that adds 1 to the index in an array
void Lang::trigram(string language){

    int trigrams = 0;
    for(int i = 0; i < (int)language.length()-2; i++){
        trigrams = 0;
        if(language[i] == ' '){
            trigrams += 0;
        }
        else{
            trigrams += (int)((language[i]-96) * (27*27));
        }
        if(language[i+1] == ' '){
            trigrams += 0;
        }
        else{
            trigrams += (int)((language[i+1]-96) * (27));
        }
        if(language[i+2] == ' '){
            trigrams += 0;
        }
        else{
            trigrams += (int)((language[i+2]-96));
        }
        freq[trigrams]++;
    }

}
//cosine similarity function computes the value of each language
double distance(Lang A, Lang B){
    unsigned long long x = 0, y = 0, z = 0;
    for(int i = 0; i <A.getLen(); i++){
        x += A.getArray(i) * B.getArray(i);
        y += A.getArray(i) * A.getArray(i);
        z += B.getArray(i) * B.getArray(i);
    }
    return (double) x / (sqrt(y) * sqrt(z));
}
