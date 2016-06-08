#include <iostream>
#include <fstream>
#include <string>
#include "swapping.hpp"
#include "getMysterious.hpp"

using namespace std;

int main()
{
    int const maximumtries = 3;
    string mysterious, swapped, fileName, input;
    char choice;
    ifstream dico;





    cout << "\t\t=== The mysterious word ===\n\n" << endl;


    do{
        int counter(maximumtries);
        mysterious = getmysterious(dico, "dico.txt");
        swapped = swapping(mysterious);
        cout << "You have " << counter << " chances to find the mysterious word" << endl;
        cout << "Try to guess it from this shambled word: " << swapped << endl;
        cout << mysterious;

        do
           {
              cout << "\n\nWhat is the word ? (TYPE IN CAPITAL LETTERS)" << endl;
              cin >> input;
              counter--;

              if (input == mysterious)
              {
                 cout << "Congratulations !.... you have found the word in " << (maximumtries-counter) << "tries" << endl;
                 counter = 0;
              }
              else
              {
                 cout << "Guess again it's not the word we are looking for !" << endl;
                 cout << "You still have " << counter << " chances to find the mysterious word" << endl;


              }

              if (counter == 0){
                cout << "The correct answer was " << mysterious << endl;
              }
           }while (counter != 0);

           cout << "Do you want to play again? ... (y/n)" << endl;

           bool wronginput = false;
           do{
            if(wronginput){
                cout << "please enter the letter \"y\" for yes or n for \"no\"" << endl;
            }
            cin >> choice;
            wronginput = true;

           }while(choice != 'y' && choice != 'n' && choice != 'Y' && choice != 'N');

    }while(choice == 'y' || choice == 'Y');

    cout << "See you again ...:)";

    return 0;
}
