#include<iostream>
using namespace std;

int main(){
    //pointer
    int age = 45;
    int *ptr = &age;
    int _age = *ptr; //*dereference operator

    //address of age
    cout<<&age<<endl;
    cout<<ptr<<endl;

    //address of ptr
    cout<<&ptr<<endl;

    //value at pointer address 
    cout<<*ptr<<endl;

    return 0;
}

