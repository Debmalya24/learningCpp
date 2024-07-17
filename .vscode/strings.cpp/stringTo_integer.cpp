#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    string str;

    cout<<"Enter the string : ";

    getline(cin,str);
    int n=str.size();

    if(n>10){
        cout<<"there is an Eroor !! ";
        return 1;
    }

    int x=0;

    for(int i=0;i<n;i++){
        x*=10;
        x+=(str[i]-48);
    }

    cout<<"the intiger value will be => "<<str<<endl;

    return 0;
}