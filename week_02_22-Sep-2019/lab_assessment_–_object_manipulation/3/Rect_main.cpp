#include <iostream>
#include "Rectangle.h" // Needed for Rectangle class
using namespace std;

int main ()
{
    Rectangle box;      // Define an instance of the Rectangle class
    double rectWidth;   // Local variable for width
    double rectLength;  // Local variable for length

    // Get the rectangle's width and length from the user.
    cout << "The area of a rectangle: \n";
    cout << "What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    // Store the width and length of the rectangle
    // in the box object.
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Display the rectangle data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    // system("pause"); // Not available in Linux
    return 0;
}