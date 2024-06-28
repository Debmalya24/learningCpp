#include<iostream>
using namespace std;


void fibonaci(int num){

    int a=0;
    int b=1;
    int c;

    for(int i=1;i<=num;i++){

        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;  
    }

    return;
}

int main(){

    int n;

    cin>>n;

    fibonaci(n);

    return 0;
}