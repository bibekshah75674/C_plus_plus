#include<iostream>
using namespace std;

inline float area(float radius)
{
    return 3.14*radius*radius;
}

int main(){
    float radius;
    cout<<"Enter the radius of a circle:\n";
    cin>>radius;
    cout<<"The area of circle is "<<area(radius);
    return 0;
}


