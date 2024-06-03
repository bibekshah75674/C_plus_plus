#include <iostream>
using namespace std;

int sum(int x = 4,int y = 5){
    return x + y;
}

int main(){
    cout<<"The sum is "<<sum()<<endl;
    cout<<"The sum is "<<sum(4,7);
    return 0;
}