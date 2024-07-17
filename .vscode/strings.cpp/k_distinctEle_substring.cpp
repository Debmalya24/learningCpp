#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
#include <limits.h>
#include<set>
using namespace std;
int main(){
    string str;
    vector<string>v;
    cout<<"enter the elements : ";
    getline(cin,str);

    int n=str.size();
    int count=0;
    int count2=0;

    int k;
    cout<<"enter k : ";
    cin>>k;
    string s="";

    //checking the condition if all ch are lowercas or not
     for (int i=0;i<str.size();i++) {
        if (str[i] < 'a' || str[i] >'z') {
          cout<<"Character is not a lowercase letter.";
        }
    }

   for(int i=0;i<n;i++){

    for(int j=i+1;j<=n;j++){

      string substring=(str.substr(i,(j-i)));

      set<char>uniqueChars(substring.begin(),substring.end());

      if(uniqueChars.size()==k){

        v.push_back(substring);

      }

    }
   }

   //cout<<s<<endl;
   count2=v.size();

   cout<<"expected substring : "<<endl;

   for(int i=0;i<v.size();i++){

    cout<<v[i]<<endl;
   }

   cout<<"total count will be : "<<count2;

    return 0;
}