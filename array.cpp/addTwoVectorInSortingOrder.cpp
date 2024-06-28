#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int m,n;

    cin>>m>>n;

    vector<int>v1;
    vector<int>v2;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }

    for(int i=0;i<m;i++){
        int ele;
        cin>>ele;
        v2.push_back(ele);
    }


    vector<int>v(v1.size()+v2.size());
    vector<int>::iterator it, st;

    it=set_union(v1.begin(),
                 v1.end(),
                 v2.begin(),
                 v2.end(),
                 v.begin());

    for(st=v.begin();st!=it;++st){

        cout<<*st<<" ";
    }cout<<endl;


    return 0;
}