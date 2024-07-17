#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of chracters in a string : ";
    cin>>n;

    cin.ignore();

    string str;

    cout<<"Enter the string => ";

    getline(cin,str);

    //condition

    for(int i=0;i<n;i++){

        if(i%2 !=0){

            str[i]='#';
        }
    }

    cout<<"The new string is => "<<str<<endl;

    return 0;
}