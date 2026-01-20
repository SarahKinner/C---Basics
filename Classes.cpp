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

//Create the setDimensions function
void Rectangle::setDimensions(int w, int h){
    width = w;
    height = h;
}

//Add area function
int Rectangle::area(){
    return width * height;
}

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

    //Create the rectangle object
    Rectangle myRectangle;

    //Call the setDimensions function
    myRectangle.setDimensions(w, h);

    //Call the area function
    int result = myRectangle.area();

    //Print the results
    cout << "The area of the rectangle is " << result << endl;
    
//This will end the program