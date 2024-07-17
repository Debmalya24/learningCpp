#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
bool isomorphic(string s,string t){

    if(s.size()!=t.size()){
        return false;
    }

    vector<int>v(150,1000);

    for(int i=0;i<s.size();i++){

        int idx=(int)(s[i]);
        if(v[idx]==1000)  v[idx]=(s[i]-t[i]);
        else if( v[idx] !=(s[i]-t[i])) return false;
    }

    //emptying string

    for(int i=0;i<v.size();i++){
        v[i]=1000;
    }

    for(int i=0;i<t.size();i++){

        int idx=(int)(t[i]);

        if(v[idx]==1000) v[idx]=t[i]-s[i];
        else if(v[idx]!=t[i]-s[i]) return false;
    }


    return true;
}

int main(){

    string s;
    cout<<"enter the string : ";
    getline(cin,s);

    string t;
    cout<<"enter the string : ";
    getline(cin,t);


    if(isomorphic(s,t)){

        cout<<"they are isomprphic."<<endl;
    }
    else{
        cout<<"they are not isomprphic."<<endl;
    }

    return 0;

}