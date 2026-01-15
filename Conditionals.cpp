//Even or odd program

//Helps to input and output functions and makes it easier to code
#include <iostream>
using namespace std;

//Variables that are being stored
int x;
int y;

//Asks the user to enter in a number
cout << "Please enter a number";

//User inputs a number
cin >> x;

//Calculation to figure if the number inputted is even or odd
y = x % 2;

//If then statement to print depending if it's even or odd
if (y == 0) {
std::cout << "The number you inputted is a even number." << std::endl;
} else {
std::cout << "The number you inputted is a odd number." << std::endl;
}