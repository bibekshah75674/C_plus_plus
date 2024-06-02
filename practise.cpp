//local and global variable
#include <iostream>

using namespace std;

int glo = 56;

void sum(){
    int glo = 9;
    cout<<glo;
}

int main(){
    int glo = 4;
    glo = 6;
    cout<<glo;
    sum();
    return 0;
}