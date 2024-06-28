#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;

    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    cout<<((num1==num2)?1:0)<<endl;// In first case (false(0)); In second case(true(1)).

    int a,b;
    cout<<"a: ";
    cin>>a;

    cout<<"b: ";
    cin>>b;

    cout<<((a<50)&&(a<b)?1:0)<<endl;//In first case (true(1)); In second case(false(0)).
    return 0;
}