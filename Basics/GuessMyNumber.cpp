#include <iostream>

using namespace std;

int main() {

    int i;
    bool keepgoing = true;
    int answer = 7;

    while(keepgoing) {
        cout << "Enter a number to guess: ";
        cin >> i;

        if(i > answer){
            cout<< "Your guess is high " << endl;
        } else if(i == answer) {
            cout << "You guessed correctly " << endl;
            keepgoing = false;
        } else {
            cout << "Your guess is low " << endl;
        }
    }
}