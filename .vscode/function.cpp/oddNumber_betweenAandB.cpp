#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void oddnumber(int a,int b){

    if(a>b){

        oddnumber(b,a);
        return;
    }

    for(int i=a;i<=b;i++){

        if(i %2 !=0){

            cout<<i<<" "<<endl;
        }
    }
}

int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;

    int b;
    cout<<"Enter the second number : ";
    cin>>b;

    oddnumber(a,b);

    return 0;
}