#ifndef _lang_h
#define _lang_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Lang {
private:
	int len = 19863;
	int *freq;
	void trigram(string language);
public:
	Lang(string l); // calls trigram
	~Lang();
	//double distance(double pointA, double pointB, unsigned int lvec);
	void print();

};

#endif
