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
    Lang x("thisisasentence")x;  //given language string
    x.print();

    if(agrc != 2){
        runtime_error("Invalid");
    }

    return 0;

}
