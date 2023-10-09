// Q5) Develop a program that uses a while loop to continuously prompt the user for a password until the correct password is entered. (You can decide the correct password)
#include <iostream>

using namespace std;

int main()
{
    string correct_password = "CodeXSIT";
    string password;
    while (true)
    {
        cout << "Enter Password : ";
        cin >> password;
        if (correct_password == password)
        {
            break;
        }
        else
        {
            cout << "Wrong Password. Try Again" << endl;
        }
    }
}