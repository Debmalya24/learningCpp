#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n1;
    cout<<"Enter the 1st integer : ";
    cin>>n1;

    int n2;
    cout<<"Enter the 2nd integer : ";
    cin>>n2;

    if(n1>n2){

        cout<<n1<<" = is the grestest number"<<endl;
    }
    else{

       cout<<n2<<" = is the grestest number"<<endl; 
    }

    return 0;
}