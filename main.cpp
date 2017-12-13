 //Name: Eunice Arokiadoss and Fehmina Hasan

#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<ostream>
#include<vector>
#include "tg.h"
using namespace std;
//calls distance function
double distance(Lang A, Lang B);

int main(int argc, char *argv[]) {
    //exeptional handling
    if(argc < 3 ){
        throw runtime_error("Invalid");
    }
    if(argc >= 3){
    double max = 0;
    //calling infile & myfile
    ifstream myfile;
    ifstream infile;
    vector<double> cosines;
    //made two parallel strings(test/training files) and made them into objects which is then compared in the distance function
    for(int i = 1; i <= (int)argc-2; i++){
        double dist = 0;
        string line;
        myfile.open(argv[i]);
        //exeptional handling
        if(myfile.fail()){
            throw runtime_error("ahh");
        }
        string body;
        while(getline(myfile,line)){
            body+= line;
        }
        myfile.close();
        Lang culture(body);
        string line2;
        infile.open(argv[argc-1]);
        //exeptional handling
        if(infile.fail()){
            throw runtime_error("ahh");
        }
        string body2;
        while(getline(infile,line2)){
            body2 += line2;
        }
        infile.close();
        Lang test(body2);


        dist = distance(culture, test);
        cosines.push_back(dist);

    }

    int num = 0;
    int pos = 0;
    max = cosines[0];
    //comparing command line arguments and vector of cosines to find the highest cosine value and its relating language postition in the list
    for(int i = 1; i <= (int)argc-2; i++){
        for(int j = 0; j < (int)cosines.size()-1; j++){
            if(max <= cosines[j]){
                max = cosines[j];
                pos = j + 1;
            }
        num = pos;
        }


    }
    //printing the most similar language name to the query
    cout << argv[pos] << std::endl;

return 0;
}
}
