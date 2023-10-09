// Q2) Develop a program that calculates the area of a circle using a constant value for pi (π). Use appropriate constants for radius and pi.
#include <iostream>

using namespace std;

int main()
{
    const float pi = 3.141592653589793238462643383279502884197;
    float radius;
    cout << "Enter radius of a circle : ";
    cin >> radius;
    float area = pi * radius * radius;
    cout << "Area of circle is : " << area << endl;
}