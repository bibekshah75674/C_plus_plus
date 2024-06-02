#include <iostream>
using namespace std;

int main(){
    int marks[4] = {33,44,55,66};
    int i = 0;
    do{
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while(i<4);
    return 0;
}