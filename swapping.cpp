#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "swapping.hpp"


std::string swapping (std::string word){

    srand(time(0));
    std::string temp("");

    while(word.size() != 0){
          long int counter = rand() % word.size();
          temp += word[counter];
          word.erase(counter, 1);
        }


   return temp;

}
