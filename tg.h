//Name: Eunice Arokiadoss and Fehmina Hasan

#ifndef _lang_h
#define _lang_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Lang {
private:
	int len = 27*27*27;
	//get a getter method
	int *freq;  //pointer
	void trigram(string language);

public:
	Lang(string l); // calls trigram
	~Lang();
	int getArray(int i);
	int getLen();
};

#endif
