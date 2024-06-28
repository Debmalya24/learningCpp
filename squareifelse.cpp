#include<iostream>
using namespace std;

int main(){

    int length,breadth;

    cout<<"Enter the length: "<<endl;
    cin>>length;
    cout<<"Enter the breadth: "<<endl;
    cin>>breadth;

    if(length==breadth){

        cout<<"square"<<endl;
    }
    else{
        cout<<"rectangle"<<endl;
    }

    return 0;
}