#include<iostream>
using namespace std;

int sum(int x,int y){
    return x+y;
}

int sum(int x,int y,int z){
    return x+y+z;
}

int main(){
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3,4 and 5 is "<<sum(3,4,5)<<endl;

    return 0;
}