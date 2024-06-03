#include <iostream>
using namespace std;

//function declaration/prototype
void square(int n);

int main(){
    int number = 5;
    square(number);
    cout<<"The number is "<<number;
    return 0;
}

//function definition
void square(int n){
    n = n*n;
    cout<<n<<endl;
}