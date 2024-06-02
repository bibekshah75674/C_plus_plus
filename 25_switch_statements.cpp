#include <iostream>
using namespace std;
//selection control structure:switch case statements
int main(){
    int day;
    cout<<"Enter day(1-7):"<<endl;
    cin>>day;

    switch(day){
        case 1:cout<<"Sunday";
               break;
        case 2:cout<<"Monday";
               break;
        case 3:cout<<"Tuesday";
               break;
        case 4:cout<<"Wednesday";
               break;
        case 5:cout<<"Thursday";
               break;
        case 6:cout<<"Friday";
               break;
        case 7:cout<<"Saturday";
               break;
        default:cout<<"Not a valid day!";
    }

    return 0;
}
