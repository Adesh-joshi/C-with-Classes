#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the volume of a cylinder
double cylinderVolume(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

// Function to calculate the volume of a cube
double cubeVolume(double side) {
    return pow(side, 3);
}

// Function to calculate the volume of a rectangular prism
double rectangularVolume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    int choice;
    double radius, height, side, length, width;

    cout << "Choose the shape to find the volume:" << endl;
    cout << "1. Cylinder" << endl;
    cout << "2. Cube" << endl;
    cout << "3. Rectangular Prism" << endl;
    cout << "Enter the choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter the radius of the cylinder: ";
        cin >> radius;
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << "Volume of the cylinder: " << cylinderVolume(radius, height) << endl;
        break;
    case 2:
        cout << "Enter the side length of the cube: ";
        cin >> side;
        cout << "Volume of the cube: " << cubeVolume(side) << endl;
        break;
    case 3:
        cout << "Enter the length of the rectangular prism: ";
        cin >> length;
        cout << "Enter the width of the rectangular prism: ";
        cin >> width;
        cout << "Enter the height of the rectangular prism: ";
        cin >> height;
        cout << "Volume of the rectangular prism: " << rectangularVolume(length, width, height) << endl;
        break;
    default:
        cout << "Invalid choice! Please choose a valid option (1/2/3)." << endl;
        break;
    }

    return 0;
}