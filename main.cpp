#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<ostream>
#include<vector>
#include "dna.h"
using namespace std;


int main(int argc, char *argv[]) {

  double oink = distance(1,5,10);
  cout<<oink<<endl;
  //ifstream infile("sample.fasta");
  //DNA dna = DNA(infile);
  /*cout<<myDNA.toFasta(4);

  vector<string> blah = myDNA.translate();

  for( unsigned int i = 0; i < blah.size();i++){
    cout<<blah[i]<<endl;
  }

  //cout<<myDNA.getSequence()<<endl;
  //cout<<myDNA.getHeader()<<endl;
  cout<<myDNA.revcomp().getSequence()<<endl;
  //string stuff = myDNA.getSequence();
  //cout<<(myDNA.toFasta(3))<<endl;
  cout<<myDNA.find("CAG", 0)<<endl;*/
  return 0;
}
