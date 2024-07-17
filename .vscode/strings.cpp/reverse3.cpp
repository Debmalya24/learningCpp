#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

     vector<int>v;

    int n;
    cout<<"Enger the no. of str in the array: ";
    cin>>n;

    cin.ignore();

    string str;

    cout<<"the string will  be => ";

    getline(cin,str);

    if(n%2 !=0){

        cout<<"There is an error !!";
        return 1;
    }
    
    
    if(n%2==0){

        reverse(str.begin()+n/2,str.end());

    }

    cout<<"The new string will be = > "<<str<<endl;

    return 0;
    

}