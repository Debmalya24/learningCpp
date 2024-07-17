#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    string s;

    getline(cin,s);

    vector<int>v(26,0);

    for(int i=0;i<s.length();i++){

        char ch=s[i];
        int ascii=int(ch);

        v[ascii-97]++;
    }

    int max=0;

    for(int i=0;i<v.size();i++){

        if(v[i]>max) max=v[i];
    }

    for(int i=0;i<v.size();i++){

        if(v[i]==max){

            int ascii=i+97;
            char ch=(char)ascii;

            cout<<ch<<" "<<max<<endl;
        }
    }

    return 0;
}