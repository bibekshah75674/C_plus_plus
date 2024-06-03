#include <iostream>     //Note:swapping cannot be done by call by value method
using namespace std;

//function declaration/prototype
void swap(int a,int b);

int main(){
    int x = 3;
    int y = 4;
    swap(x,y);
    cout<<"x = "<<x<<" and y = "<<y<<endl;
    return 0;
}

//function definition
void swap(int a,int b){
    int t = a;
    a = b;
    b = t;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
}
