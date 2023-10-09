// Q4) Build a program that takes a user's age as input and uses if-else statements to determine if the user is a child, teenager, adult, or senior citizen.
#include <iostream>

using namespace std;

int main()
{
    float age;
    cout << "Enter your age : ";
    cin >> age;

    if ((age < 13) && (age > 0))
    {
        cout << "You are a child" << endl;
    }
    else if ((age >= 13) && (age < 18))
    {
        cout << "You are a teenager" << endl;
    }
    else if ((age >= 18) && (age < 65))
    {
        cout << "You are an adult" << endl;
    }
    else
    {
        cout << "You are senior citizen" << endl;
    }
}