#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a = 4, b = 68, c = 678, d = 9999;
    
    cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl;
    cout<<"The value of d without setw is:"<<d<<endl;

    cout<<"The value of a is:"<<setw(4)<<a<<endl;
    cout<<"The value of b is:"<<setw(4)<<b<<endl;
    cout<<"The value of c is:"<<setw(4)<<c<<endl;
    cout<<"The value of d is:"<<setw(4)<<d<<endl;
    return 0;
}