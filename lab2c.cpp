// Lucila Hernandez Del Carmen
// Lab 2C
// This program determines the circumference and area of a circle of given radius.

#include <iostream>
using namespace std;

// Const variables for calculation
const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
    double area; // Definition of area of a circle variable
    double circumference; // Definition of circumference variable
    circumference = 2 * PI * RADIUS; // Computer circumference
    area = PI * RADIUS * RADIUS; // Computes area
    // Fill in the code for the count statement that will output(with description) the circumference
    cout << "The circumference of a circle given the radius " << RADIUS << " is " << circumference << endl;
    // Fill in the code for the cout statement that will output(with description) the area of a circle
    cout << "The area of a circle given the radius " << RADIUS << " is " << area << endl;
    return 0;
}