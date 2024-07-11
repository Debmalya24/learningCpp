#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of charecter in the string=> ";
    cin>>n;

    //Clear the newline character left in the input buffer
    cin.ignore();

    string str;

    getline(cin,str);

    //printing 'a' in even index

    for(int i=0;i<n;i++){

        if(i%2==0){

            str[i]='a';
        }
    }

    cout<<str;

    return 0;
}