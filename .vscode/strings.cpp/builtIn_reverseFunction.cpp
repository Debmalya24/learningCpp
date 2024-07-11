#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    string str="Debmalya";
    cout<<str;

    reverse(str.begin(),str.end());
    cout<<"the new string is => "<<str<<endl;//reverse is used to reverse any string


    //reverse in a specific renge
    string s="Debmalya";
    reverse(s.begin()+3,s.end()-1);
     cout<<"the new string is => "<<s<<endl;

     reverse(s.begin()+3,s.begin()+7);
      cout<<"the new string is => "<<s<<endl;



     return 0;
}