#include<iostream>
#include<istream>
using namespace std;
// #include<string>

int main(){
    string name;
    int age;
    string college;
    cout<< "Enter your Name : ";
    getline(cin,name);
    
    cout<< "Enter your College Name : ";
    getline(cin,college);
    
    cout<< "Enter your Age : ";
    cin>>age;

    cout<<"Hello "<<name<<" I see you are "<<age<<" years old and are currently studying at "<<college<<endl;
    return 0;
}