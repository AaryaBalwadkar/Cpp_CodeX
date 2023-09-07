#include <iostream>
using namespace std;

int main(){
    float num1, num2, i;
    char sign;
    cout<<"                    Calculator"<<endl;
    cout<<endl;
    cout<<"                    +   |   -"<<endl;
    cout<<"                    *   |   /"<<endl;
    cout<<endl;
    
    cout<<"Enter number : ";
    cin>>num1;

    cout<<"Enter SIGN of the operation which you have to perform : ";
    cin>>sign;
    

    cout<<"Enter number : ";
    cin>>num2;

    if (sign=='+'){
        cout<<"                Value = ";
        i=num1+num2;
    } 
    if (sign=='-'){
        cout<<"                Value = ";
        i=num1-num2;
    }
    if(sign=='*'){
        cout<<"                Value = ";
        i=num1*num2;
    }
    if(sign=='/'){
        cout<<"                Value = ";
        i=num1/num2;
    }
    cout<<i;
}