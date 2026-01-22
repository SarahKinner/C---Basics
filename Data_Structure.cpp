//Number sorter program
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Main starts here
int main() {
    //Vector gets created
    vector<int> numbers;

    //Variables needed
    int num;
    int x;

    //Ask user how many numbers they are going to input
    cout << "How many numbers would you like to enter? ";

    //User inputs the number of numbers thy are going to add to the vector
     cin >> x;

    //Put the input loop here
    for (int i = 0; i < x; i++){
        //Ask the user to enter a number
        cout << "Please enter a number: ";

        //Read the number inputted into num
        cin >> num;

        //Add num to vector
        numbers.push_back(num);
    }

//Sort out the vector

//Output the loop

//This will end the program