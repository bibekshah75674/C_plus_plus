#include <iostream>
using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
    ep bibek;
    bibek.eId = 1;
    bibek.favChar = 'B';
    bibek.salary = 12000000;
    cout<<"The id of bibek is "<<bibek.eId<<endl;
    cout<<"His favourite character is "<<bibek.favChar<<endl;
    cout<<"His salary is "<<bibek.salary<<endl;
    return 0;
}