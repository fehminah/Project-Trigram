## Design Document for Trigram

## Eunice Arokiadoss and Fehmina Hasan

## Eunice: earokiadoss@my.uri.edu
## Fehmina: fehmina@my.uri.edu

## Background
- trigram
- how to design it
- code similar to trigram is used to translate webpages that are written in languages other than english

## Problems to solve
- trigram takes two documents and determines if the character frequencies are similar
- distance determines how similar the trigram frequencies between two or more languages

## classes needed
- Not planning to use classes
    - might use it depending on our method for milestone 1 and 2

## other functions
- vector, string, template
- main()
    - subtract 1 from agrc() to get the amount of files
    - then it could use the trigram() function to compute the frequency of each trigram
    - returns language
- trigram()
    - use translate() to go through the languages and find the amount of times each three character sequence combo has occurred
    - returns language
- translate() : helper function for trigram
    - goes through each language and gets every trigram and appends it to a vector of strings
    - goes through them to find the highest ASCII value with base 27
    - in an empty list, the list would be ordered from highest to lowest according to ASCII values from the vectors of trigram
    - between all the languages which has the highest occurrence of ASCII value with base 27
    - returns language
- distance()
    - in a for loop, each trigram will be computed using the cosine similarity equation to find its value
    - then the largest value will be the language that its most similar to
    - returns language

## files needed
- different language text files (.txt) to testing trigram code
- training.cpp and test.cpp to implement trigram code

##libraries needed
- vector
- string
- cstdlib
- using namespace std
- iostream and fstream

## compile script 
- Will need to compile trigram.cpp, and main.cpp
- Will need a flag to skip compilation of main.cpp, and only produce an
object file. (./compile -nolink)
