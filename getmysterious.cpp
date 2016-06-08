#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "getMysterious.hpp"


std::string getmysterious(std::ifstream& flow, std::string filename){

    std::string word;
    flow.open(filename.c_str());
    if (flow)
    {
        srand(time(NULL));
        int counter = rand() % 323577;

        for(int i = 0; i < counter; i++){
            getline(flow,word);
        }

        flow.close();

        return word;
    }
    else
    {
         std::cout << "the dictionary file is missing " << std::endl;

         return "Mysterious";
    }

}
