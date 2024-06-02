#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;

    // & --> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    //* --> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;
    return 0;
}

