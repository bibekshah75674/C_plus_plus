#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int *b = &a;
    int **c = &b;

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl; 

    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    cout<<"The address of c is "<<&c<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<*b<<endl;
    cout<<"The value at address of c is "<<**c<<endl;
    return 0;
}