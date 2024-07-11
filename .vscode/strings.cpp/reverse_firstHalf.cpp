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

    getline(cin,str);

    //siz eof length

    int n=str.length();

    //condition

    if(n%2 !=0){

        cout<<"Error: th string has not even length.";
    }

    reverse(str.begin(),str.begin()+n/2);

    cout<<"the new string is => "<<str<<endl;

    return 0;


}