#include <iostream>
#include <fstream>
#include <string>
#include "swapping.hpp"
#include "getMysterious.hpp"

using namespace std;

int main()
{
   int counter(0);
   string mysterious, swapped, fileName;
   ifstream dico;


   mysterious = getmysterious(dico, "dico.txt");
   swapped = swapping(mysterious);

   cout << "swapped: " << swapped << endl;

    return 0;
}
