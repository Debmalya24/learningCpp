#include<iostream>
using namespace std;

bool voting(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int age;
    cout<<"Enter the age of the person = ";
    cin>>age;

    if(voting(age)==true){
        cout<<"Eligibile for vote"<<endl;
    }

    else{

        cout<<"Not Eligibile for vote"<<endl;
    }

    return 0;

}