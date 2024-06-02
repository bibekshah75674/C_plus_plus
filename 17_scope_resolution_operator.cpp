#include <iostream>
using namespace std;

int c = 90;

int main(){
    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is "<<c<<endl;
    
    cout<<"The global c is "<<::c; // '::' is scope resolution operator and helps to print global variable value
    return 0;
}