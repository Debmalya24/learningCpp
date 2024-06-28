#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b;
    char op;

    cout<<"Enter the equation : ";

    cin>>a>>op>>b;

    switch(op){

        case '+':
         cout<<a+b<<endl;
         break;

        case '-':
         cout<<a-b<<endl;
         break;

        case '*':
         cout<<a*b<<endl;
         break;

        case '/':
         cout<<a/b<<endl;
         break;

        case '%':
         cout<<a%b<<endl;
         break;
    }

    return 0;
}