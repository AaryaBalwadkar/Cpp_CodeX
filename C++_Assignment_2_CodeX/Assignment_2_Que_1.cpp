// Q1) Create a program that takes user input as a floating-point number, converts it to an integer using typecasting, and displays both the original and the typecasted values.
#include <iostream>

using namespace std;

int main()
{
    float number;
    cout << "Enter a decimal number : ";
    cin >> number;

    cout << "Orginal Value of number is : " << number << endl;
    cout << "Typecasted Value of number into integer is : " << int(number) << endl;
}