#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Set up a rectangle object using default constructor
    Rectangle box1(10, 20);

    // Default copy constructor (not memberwise assignment)
    Rectangle box2 = box1;

    // Display the rectangle objects
    cout << "Before the assignment:\n";
    cout << "Box 1 data:\t";  box1.output();
    cout << "Box 2 data:\t";  box2.output();

    // Test the makeRectangle function (returns by value)
    cout << "\nTesting makeRectangle function:\n";
    Rectangle rect1 = makeRectangle(); // Copy constructor is called
    rect1.output();
    cout << "Copy count after makeRectangle: " << Rectangle::getCopyCount() << endl;

    // Test the makeRectangle_v2 function (returns by reference)
    cout << "\nTesting makeRectangle_v2 function:\n";
    Rectangle& rect2 = makeRectangle_v2(); // No copy constructor call
    rect2.output();
    cout << "Copy count after makeRectangle_v2: " << Rectangle::getCopyCount() << endl;

    // Display the final copy count
    cout << "\nFinal copy constructor call count: " << Rectangle::getCopyCount() << endl;

    return 0;
}
