## Design Document for Trigram
## Eunice Arokiadoss and Fehmina Hasan

## Eunice: earokiadoss@my.uri.edu
## Fehmina: fehmina@my.uri.edu

## Problems to solve
- trigram takes two documents and determines if the character frequencies are similar
- distance determines how similar the trigram frequencies between two or more languages
- 19,682 element vector of integers with 0's
- distance function uses the cosine similarity equation on each language and whichever one has highest value is the most similar language
- Milestone 1:
  - code must compile
  - when it compiles, an executable file named frequencies should be created
  - output of frequency of each trigram separated by spaces in order
- Milestone 2:
    - code must compile
    - when it compiles, an executable file named language should be created

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
- main():
    - milestone 1  main:
    - if there is more than one argument it will throw an error and return 1 which is a non zero value.
        - each frequency vector should be separated by spaces
        - returns frequency vector
    - milestone 2  main:
        - it needs to have 2 or more arguments otherwise it will throw an error and return 1 which is a non zero value
        - if it doesn't find the file name it will automatically throw in an error and return 1
        - n-1 files need to be the training files while the nth file has to be the testing file.
        - subtract 1 from agrc() to get the amount of files
        - then it could use the trigram() function to compute the frequency of each trigram
        - if filename is not found, it should throw a runtime_error
        - returns filename of the most-similar training input
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
