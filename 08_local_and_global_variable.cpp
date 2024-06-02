#include <iostream>
using namespace std;

int glo = 5;

void sum(){
    cout<<glo;
}

int main(){
    int glo = 6;
    sum();
    cout<<glo;
    return 0;
}