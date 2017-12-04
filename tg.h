//Name: Eunice Arokiadoss and Fehmina Hasan

#ifndef _lang_h
#define _lang_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Header file
//class caled Lang
class Lang {
private:
	int len = 19682;
	int *freq;  //pointer
	void trigram(string language);
public:
	Lang(string l); // calls trigram
	~Lang();
	void print();
};

#endif
