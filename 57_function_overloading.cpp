#include <iostream>
using namespace std;

int sum(int x,int y){
    return x+y;
}

int sum(int x,int y,int z){
    return x+y+z;
}

int main(){
    cout<<"The sum of 4 and 7 is "<<sum(4,7)<<endl;
    cout<<"The sum of 4,1 and 7 is "<<sum(4,1,7);
    return 0;
}