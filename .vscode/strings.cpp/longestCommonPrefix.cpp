#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"entr the number of ele : ";
    cin>>n;

    cin.ignore();

    vector<string>str(n);

    //cout<<"entr the strings: ";

    for(int i=0;i<str.size();i++){

        getline(cin,str[i]);
    }
    // sorting
    sort(str.begin(),str.end());

    //after sorting 
    string first=str[0];//first string of the string vector
    string last=str[n-1];//last string of the string vector
    string s="";

    bool flag =false;

    if(n==1){
        cout<<str[0]<<" ";
    }

    for(int i=0;i<(min(first.size(),last.size()));i++){

        if(first[i]==last[i]){
        s+=first[i];
        flag=true;
        }

        else{
            break;
        }
    }

   if(flag==true) {

    cout<<"longest common prefix is = >"<<s<<" "<<endl;

   }

   else{
    cout<<"there is no longest common prefix  "<<endl;

   }

    return 0;
}