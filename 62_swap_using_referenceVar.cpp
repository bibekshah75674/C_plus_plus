#include<iostream>
using namespace std;

void swapReferenceVar(int &a,int &b);

int main(){
    int x = 4,y = 5;
    cout<<"The value of x and y are "<<x<<" and "<<y<<endl;
    swapReferenceVar(x,y); 
    cout<<"The value of x and y are "<<x<<" and "<<y<<endl;
    return 0;
}

void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}