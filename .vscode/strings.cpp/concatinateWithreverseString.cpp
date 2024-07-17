#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    string str;

    //taking input
    cout<<"Enter the string : ";
    getline(cin,str);
    string p=str;

    int n=str.length()-1;

    //concatinate with reverse string
    reverse(str.begin(),str.end());

    p=p+str;

    cout<<"after concatinate with reverse string ,the new string will be : "<<p<<endl;

    return 0;
}