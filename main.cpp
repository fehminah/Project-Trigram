#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<ostream>
#include<vector>
#include"tg.h"
using namespace std;


int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;

    double oink = distance(1.0,5.0,10);
    cout<<oink<<endl;

    vector<string> bark = helper("meowwoofauuuoink");
    cout<<bark<<endl;


    for(int i = 0; i < 19683; i++){
        cout<<freqS[i]<<endl;
    }
    return 0;
}
