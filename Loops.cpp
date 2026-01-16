//Count from 1 to N
#include <iostream>
using namespace std;

int main() {
    //Variables that are being stored
    int x;
    int i;

    //Ask user for number
    cout << "Please enter a number: ";

    //User inputs a number
    cin >> x;


    //Loop here will go up by one each time until it equals the number the user put
    for (int i = 1; i <= x; i++){
        cout << i << "\n";
    }

    //This will end the program
    return 0;
}