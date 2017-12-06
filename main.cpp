//Name: Eunice Arokiadoss and Fehmina Hasan

#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<ostream>
#include<vector>
#include "tg.h"
using namespace std;

int main(int agrc, char *argv[]) {
    /*if(agrc < 2){
        throw runtime_error("Invalid");
    } else{
        //we need it to have more than
        //one agrument as it not just 1 but like as many as possible
        for(int i  = 1; i < agrc; i++){
            Lang x(argv[i]);  //given language string
            //x.print();
        }
    }
    if(agrc-1 != test){
        throw runtime_error("Invalid");
    }*/
    if(agrc != 2){
       throw runtime_error("Invalid");
   } else{
       Lang x(argv[1]);
      //cosine(""); //given language string
      // x.print();
   }

    return 0;
}
