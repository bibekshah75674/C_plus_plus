#include <iostream>     //Note:swapping can be done by call by reference method
using namespace std;

//function declaration/prototype
void _swap(int *a,int *b);

int main(){
    int x = 3;
    int y = 4;
    _swap(&x,&y);
    cout<<"x = "<<x<<" and y = "<<y<<endl;
    return 0;
}

//function definition
void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
    cout<<"a = "<<*a<<" and b = "<<*b<<endl;
}
