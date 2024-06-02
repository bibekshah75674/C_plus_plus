#include <iostream>
using namespace std;

int main(){
    int a = 3,b = 6;
    cout<<"The value of ((a==b)&&(a<b)) is:"<<((a==b)&&(a<b))<<endl;
    cout<<"The value of ((a==b)||(a<b)) is:"<<((a==b)||(a<b))<<endl;
    cout<<"The value of a!b is "<<(!(a==b));
    return 0;
}

