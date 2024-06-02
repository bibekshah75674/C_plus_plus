#include <iostream>
using namespace std;

int main(){
    float d = 3.45f; //3.45 is by default double 
    long double e = 3.45l; 

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //sizeof
    cout<<"The size of 3.45 is "<<sizeof(3.45)<<endl;
    cout<<"The size of 3.45F is "<<sizeof(3.45F)<<endl;
    cout<<"The size of 3.45f is "<<sizeof(3.45f)<<endl;
    cout<<"The size of 3.45L is "<<sizeof(3.45L)<<endl;
    cout<<"The size of 3.45l is "<<sizeof(3.45l)<<endl;
    return 0;
}