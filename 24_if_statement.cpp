#include <iostream>
using namespace std;
//selection control structure: If else-if else ladder 
int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age<18){
        cout<<"Not an adult!";
    } else if(age==18){
        cout<<"Entering adulthood";
    } else{
        cout<<"Adult!!";
    }
    return 0;
}


