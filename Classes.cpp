//Rectangle Class program
#include <iostream>
using namespace std;

//Create the rectangle class
class Rectangle {

//Add private section
    private:
        int width;
        int height;

//Add public section
    public:
        void setDimensions(int w, int h);
        int area();
};

//Main starts here
int main() {

    //Add the variables needed for the program
    int w;
    int h;

    //Ask user for width
    cout << "Please enter the width of the rectangle: ";

    //User inputs a width
    cin >> w;

    //Ask user for height
    cout << "Please enter the height of the rectangle: ";

    //User inputs a height
    cin >> h;

//Call function

//Print the results

//This will end the program