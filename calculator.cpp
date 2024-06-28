#include<iostream>
using namespace std;

int main(){

    float num1;
     cout<<"enter number 1: "<<endl;
    cin>>num1;

    float num2;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;

    char op;
    cout<<"Enter operators: "<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<"Sum is= "<<num1+num2<<endl;
        break;

        case '-':
        cout<<"diffarence is= "<<num1-num2<<endl;
        break;

        case '*':
        cout<<"product is= "<<num1*num2<<endl;
        break;

        case '/':
        cout<<"division is= "<<num1/num2<<endl;
        break;

        default:
        cout<<"error"<<endl;
    }

    return 0;
}