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
    if(agrc != 2){
        runtime_error("Invalid");
    } else{
        Lang x(argv[1]);  //given language string
        x.print();
    }

    return 0;

}
