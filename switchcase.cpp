#include<iostream>
using namespace std;

int main(){

    int day;
    cin>>day;

    switch(day){
        case 1:
        cout<<"Monday"<<endl;
        break;

         case 2:
        cout<<"Tuesday"<<endl;
        break;

         case 3:
        cout<<"Wednesday"<<endl;
        break;

         case 4:
        cout<<"Thursay"<<endl;
        break;

         case 5:
        cout<<"friday"<<endl;
        break;

         case 6:
        cout<<"Saturday"<<endl;
        break;

         case 7:
        cout<<"Sunday"<<endl;
        break;

        default:
        cout<<"default case"<<endl;
    }

    return 0;
}