#ifndef _lang_h
#define _lang_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Lang {
	Private:
		int freq[19863];
		void helperfunction(string seq);

	Pubic:
		Lang(string l);
		~Lang();
		void trigram(string language);
		void print();

};
