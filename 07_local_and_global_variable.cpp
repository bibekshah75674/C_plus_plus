#include <iostream>
using namespace std;

int glo = 8;

int main(){         //Note:global and local variable can have same name but the precendence is given to the local variable
    int glo = 4;
    glo = 5; //local variable is updated
    // sum();
    cout<<glo;
    return 0;
}
