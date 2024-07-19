#include<iostream>
using namespace std;

void swap(int *a,int *b);

int main(){
    int x,y;
    x = 4;
    y = 5;
    cout<<"The value of x and y is "<<x<<" and "<<y<<endl;
    swap(&x,&y);
    cout<<"The value of x and y is "<<x<<" and "<<y<<endl;

    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"The value of a and b after swapping is "<<*a<<" and "<<*b<<endl;
}