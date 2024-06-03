#include <iostream>
using namespace std;

//function declaration/prototype
int sum(int a,int b);
void g();

int main(){
    int x,y;
    cout<<"Enter the value of first number:"<<endl;
    cin>>x;

    cout<<"Enter the value of second number:"<<endl;
    cin>>y;

    cout<<"The sum of two numbers is "<<sum(x,y)<<endl;  //function call //x and y are the actual parameter
    g();
    return 0;
}

//function definition
int sum(int a,int b){  // a and b formal parameters
    int c = a + b;
    return c;
}

void g(){
    cout<<"Good Morning!";
}