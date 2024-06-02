#include <iostream>
using namespace std;

int main(){
    int a = 45;
    float b = 45.45;
    cout<<"The value of a is "<<float(a)<<endl;  //we can also write float(a) as (float)a
    cout<<"The value of b is "<<int(b)<<endl;
    
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;

    //we can also write
    int c = int(b);
    return 0; 
}