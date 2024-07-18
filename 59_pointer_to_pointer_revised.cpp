#include<iostream>
using namespace std;

int main(){
    int a = 21;
    int *ptr = &a;
    int **pptr = &ptr;

    //address of pointer
    cout<<"The address of ptr is "<<&ptr<<endl;
    cout<<"The address of ptr is "<<pptr<<endl;

    cout<<"The value at address pointer "<<*ptr<<endl;
    cout<<"The value at address pointer of a pointer "<<**pptr<<endl;
    
    return 0;
}

