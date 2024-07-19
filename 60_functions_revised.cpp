#include<iostream>
using namespace std;

int sum(int x,int y); //x and y are formal parameters
void printHello(void);

int main(){
    int num1,num2;
    cout<<"Enter the value of first number:"<<endl;
    cin>>num1;
    cout<<"Enter the value of second number:"<<endl;
    cin>>num2;
    cout<<"The sum of two number is "<<sum(num1,num2)<<endl; //num1 and num2 are actual parameters
    printHello();
    return 0;
}

int sum(int x,int y){ //x and y are formal parameters
    int z = x + y;
    return z;
}

void printHello(void){
    cout<<"HElooooo";
}