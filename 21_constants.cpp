#include <iostream>
using namespace std;

int main(){
    const int a = 45;
    cout<<"The value of a is "<<a<<endl;
    // a = 56;  //You will get an error because a is a constant
    // cout<<"The value of a after changing its value is "<<a;

    const float pi = 3.14;
    cout<<"The value of pi is "<<pi;
    return 0;
}
