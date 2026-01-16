//Square of a number
#include <iostream>
using namespace std;

//Make function here where it'll take the input and figures out what the square of the input is
int squareNumber(int x){
    int result = x * x;
    return result;
}

int main() {
    //Variables needed
    int x;

    //Ask user for number
    cout << "Please enter a number: ";

    //User inputs a number
    cin >> x;

    //Call the function
    squareNumber();

//Print the result