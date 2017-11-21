## Design Document for trigram

## Eunice Arokiadoss and Fehmina Hasan

## Eunice: earokiadoss@my.uri.edu
## Fehmina: fehmina@my.uri.edu

## Background(0)
- trigram
- how to design it
- code similar to trigrams is used to translate webpages that are written in languages other than english

## Problems to solve(0)
- trigram takes two documents and determines if the character frequencies are similar
- distance determines how similar the trigram frequencies between two or more languages

## classes needed(0)
- Not planning to use classes
    - might use it depending on our method for milestone 1 and 2

## other functions(0)
    - vector, string, template
- translate() like function for trigram
    - instead of codon, it will count the amount of times each trigram is repeated

## files needed (0)
- different language text files (.txt) to testing trigram code
- training.cpp and test.cpp to implement trigram code

##libraries needed(0)
- vector 
- string
- cstdlib
- using namespace std
- iostream and fstream

## compile script (0)
- Will need to compile trigram.cpp, and main.cpp
- Will need a flag to skip compilation of main.cpp, and only produce an
object file. (./compile -nolink)
