#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Age of the people is: ";
    cin>>age;

    if(age<12){
        cout<<"Child"<<endl;
    }

    else if(age>18){
        cout<<"Adult"<<endl;
    }

    else{
        cout<<"Teenager"<<endl;
    }

    return 0;
}