// Rectangle.h

#include <iostream>
using namespace std;

class Rectangle {
private:
    double width = -1, length = -1;
    static int copyConstructorCount; // Static variable to count copy constructor calls

public:
    // Constructor
    Rectangle(double width, double length) {
        this->width = width;
        this->length = length;
    }

    // Copy constructor
    Rectangle(const Rectangle &obj) {
        width = obj.width;
        length = obj.length;
        copyConstructorCount++;
        cout << "Copy constructor called. Count: " << copyConstructorCount << endl;
    }

    // Getter functions
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Output function
    void output() const {
        cout << "Width is " << width << ", Length is " << length << endl;
    }

    // Static function to reset the count
    static void resetCopyConstructorCount() {
        copyConstructorCount = 0;
    }

    // Function to return count
    static int getCopyConstructorCount() {
        return copyConstructorCount;
    }
};

// Initialize static variable
int Rectangle::copyConstructorCount = 0;

// Function to demonstrate returning by value
Rectangle makeRectangle() {
    Rectangle temp(30, 40);
    return temp; // Copy constructor will be called here
}

// Function to demonstrate returning by reference
Rectangle& makeRectangle_v2() {
    static Rectangle temp(50, 60); // Static to ensure it outlives the function scope
    return temp; // No copy constructor called here
}
