#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    string str="Debmalya";
    int size=str.size();//str.siz() is used to find the size of the string
    cout<<"Enter the size of the string => "<<size<<" "<<endl;

    int length=str.length();
    cout<<"Enter the size of the string => "<<size<<" "<<endl;

    str.push_back('a');
    cout<<"the new string is => "<<str<<endl;//str.push_back('a') is used to push any charecter 

    str.pop_back();
    cout<<"the new string is => "<<str<<endl;//str.pop_back() is used to pop any charecter from

    string s=" is waiting for someone ";
    str=str+s;//'+'is used to add two string
    cout<<"the new string is => "<<str<<endl;

    return 0;
}