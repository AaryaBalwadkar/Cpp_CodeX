#include<iostream>
using namespace std;

int main(){
    float num1, num2, num3;
    cout<<"This is program to check greatest number of the given three numbers.\n";

    cout<<"Enter first number : ";
    cin>>num1;
    
    cout<<"Enter second number : ";
    cin>>num2;
    
    cout<<"Enter third number : ";
    cin>>num3;

    if (num1>num2 && num1>num3)
    {
        cout<<num1<<" is the greatest number amoungst "<<num1<<", "<<num2<<" and "<<num3;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<num2<<" is the greatest number amoungst "<<num1<<", "<<num2<<" and "<<num3;
    }
    else
    {
        cout<<num3<<" is the greatest number amoungst "<<num1<<", "<<num2<<" and "<<num3;
    }
     
    // cout<<num1<<num2<<num3;
    return 0;
}
