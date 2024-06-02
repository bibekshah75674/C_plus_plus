#include <iostream>
using namespace std;
//another way of declaring array
int main(){
    int marks[5];
    marks[0] = 45;
    marks[1] = 55;
    marks[2] = 65;
    marks[3] = 75;
    marks[4] = 85;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2] = 44; //you can change the value of an array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    return 0;
}