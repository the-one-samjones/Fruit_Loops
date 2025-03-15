#include <iostream>
#include <string>
using namespace std;

string fruits[5] = {"Apple", "Banana", "Cherry", "Grape", "Orange"};
int userIn;

int main () {
    cout << "List of Fruits: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << fruits[i] << endl;
    }
    cout << "Number of fruits to add:  ";
    cin >> userIn;
    if (userIn > 0) {
        string fruitName;
        string addFruits[userIn];
        for (int i = 0; i < userIn; ++i) {
            cout << "Enter fruit name: ";
            cin >> fruitName;
            addFruits[i] = fruitName;
            cout << "Fruit added: " << addFruits[i] << endl << endl;
        }
        for (int i = 0; i < 5; ++i) {
            cout << fruits[i] << endl;
        }
        for (int i = 0; i < userIn; ++i) {
            cout << addFruits[i] << endl;
        }
    }

}