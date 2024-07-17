#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
#include <limits.h>
using namespace std;
int main(){
    string str;
    vector<string>v;
    cout<<"enter the elements : ";
    getline(cin,str);

    int n=str.size();
    int count=0;

    //finding a way to store every substring;

    //dry run : let assume str: abc
    //for i=0
    //j=(i+1)=0+1=1;                     //j=2;                               //j=3;
    //v.push_back(str.substr(0,(1-0)))  // v.push_back(str.substr(0,(2-0)))  // v.push_back(str.substr(0,(3-0)))
    //vector=> {a,ab,abc}......and so on 
    


   for(int i=0;i<str.size();i++){

    for(int j=i+1;j<=str.size();j++){

        v.push_back(str.substr(i,(j-i)));
    }
   }

   cout<<"all substrings : "<<endl;
   
   for(int i=0;i<v.size();i++){

    cout<<v[i]<<" "<<endl;
    count++;
   }

    cout<<"total nuber of substring will be : "<<count<<endl;//formula of counting substring =(n*(n+1))/2;

    return 0;
}