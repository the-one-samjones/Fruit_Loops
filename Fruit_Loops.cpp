#include <iostream>
#include <string>
using namespace std;

string fruits[5] = {"Apple", "Banana", "Cherry", "Grape", "Orange"};    //Declare and initialize array of original fruits
int userIn;

int main () {
    cout << "List of Fruits: " << endl;       //Display original fruits 
    for (int i = 0; i < 5; ++i) {
        cout << fruits[i] << endl;
    }
    cout << "Number of fruits to add:  ";               //Prompt user for the number of new fruits to add
    cin >> userIn;
    if (userIn > 0) {                                   //If user is adding any more than 0 fruits
        string fruitName;                            //Declare fruitName variable 
        string addFruits[userIn];                   //Declare array of new fruits based on the number to add
        for (int i = 0; i < userIn; ++i) {                  //Loop to add new fruits to newFruits array
            cout << "Enter fruit name: ";
            cin >> fruitName;
            addFruits[i] = fruitName;
            cout << "Fruit added: " << addFruits[i] << endl << endl;        //Inform user that the fruit was added 
        }
        for (int i = 0; i < 5; ++i) {            //Display original fruits   
            cout << fruits[i] << endl;
        }
        for (int i = 0; i < userIn; ++i) {              //Display new fruits
            cout << addFruits[i] << endl;
        }
    }

}