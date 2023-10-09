// Q7) Build a program that uses a loop to display all even numbers between 1 and 20 but skips the number 10 using the continue statement.
#include <iostream>

using namespace std;

int main()
{
    cout<<"Even numbers between 1 and 20 accept 10 are : ";
    for(int i=1;i<=20;i++)
    {
        if(i==10)
        {
            continue;
        }
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}