#include <iostream>
#include <fstream>
#include <string>
#include "getMysterious.hpp"


std::string getmysterious(std::ifstream& flow, std::string filename){

    std::string word;
    flow.open(filename.c_str());
    if (flow)
    {
        getline(flow,word);

        return word;
    }
    else
    {
         std::cout << "the dictionary file is missing " << std::endl;

         return "Mysterious";
    }

}
