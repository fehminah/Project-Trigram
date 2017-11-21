## Design Document for Trigram

## Eunice Arokiadoss and Fehmina Hasan

## Eunice: earokiadoss@my.uri.edu
## Fehmina: fehmina@my.uri.edu

## Problems to solve
- trigram takes two documents and determines if the character frequencies are similar
- distance determines how similar the trigram frequencies between two or more languages
- 19,682 element vector of integers with 0's
- distance function uses the cosine similarity equation on each language and whichever one has highest value is the most similar language

## classes needed
- Not planning to use classes
- if we use classes:
    - languages subclass
        - trigram() - groups of three character strings that have a 27 base value
        - frequency distribution of the language you are comparing it to
        - distance() - using the cosine similarity equation, the one with the highest number relative to the compared language is the most similar
    - text class
       - frequency distribution of the language you are comparing it to
       - distance() - using the cosine similarity equation, the one with the highest number relative to the compared language is the most similar

## other functions
- trigram()
    - need to create a vector of integers that are 0 and have to be the length of 27 cube
    - in a for loop, find the 27 base number and index that number in the vector of integers and increment 1
    - get the "mode" of the frequency distribution for each language and then find the highest mode
    - returns the highest mode
- distance()
    - in a for loop, each trigram will be computed using the cosine similarity equation to find its value
    - then the largest value will be the language that its most similar to
    - returns language

## files needed
- different language text files (.txt) to test trigram code
- training.cpp and test.cpp to implement trigram code

##libraries needed
- cmath
- vector
- string
- cstdlib
- using namespace std
- iostream and fstream

## compile script
- Will need to compile trigram.cpp, and main.cpp
- Will need a flag to skip compilation of main.cpp, and only produce an
object file. (./compile -nolink)
