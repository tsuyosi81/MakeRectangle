// pr11-5.cpp

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Reset the copy constructor count for clarity
    Rectangle::resetCopyConstructorCount();

    // Set up a rectangle object
    Rectangle box1(10, 20);

    // Using makeRectangle function
    cout << "Creating box3 using makeRectangle():" << endl;
    Rectangle box3 = makeRectangle(); // Copy constructor will be called

    // Display the rectangle objects
    cout << "Box 1 data:\t"; box1.output();
    cout << "Box 3 data:\t"; box3.output();

    // Reset the copy constructor count
    Rectangle::resetCopyConstructorCount();

    // Using makeRectangle_v2 function
    cout << "\nCreating box4 using makeRectangle_v2():" << endl;
    Rectangle& box4 = makeRectangle_v2(); // No copy constructor called

    // Display the rectangle objects
    cout << "Box 1 data:\t"; box1.output();
    cout << "Box 4 data:\t"; box4.output();

    // Display copy constructor count
    cout << "\nCopy constructor called " << Rectangle::getCopyConstructorCount() << " times." << endl;

    return 0;
}
