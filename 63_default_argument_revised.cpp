#include<iostream>
using namespace std;

int prod(int x = 5,int y = 6); //default argument either in function declaration(prototype) or function definition but not both
                               //default argument should always be to the extreme right side  
int main(){
    cout<<"The product of x and y is "<<prod();
    return 0;
}

int prod(int x ,int y){
    return x*y;
}
