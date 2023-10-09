// Q3) Write a program that uses manipulators to format and display the current date and time.
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Date: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year;
    cout << endl;

    cout << "Time: ";
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec;
}