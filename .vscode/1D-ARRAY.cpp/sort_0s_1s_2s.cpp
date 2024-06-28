#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort0s1s2s(vector<int>&v){

    int n=v.size();
    int no_zero=0;
    int no_one=0;
    int no_two=0;

    for(int i=0;i<n;i++){

        if(v[i] ==0) no_zero++;
        else if(v[i]==1) no_one++;
        else no_two++;
    }

    //filling elements 

    for(int i=0;i<n;i++){

        if(i<no_zero) v[i]=0;
        else if(i<(no_zero+no_one)) v[i]=1;
        else v[i]=2;
    }

    return;
}

int main(){

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int>v;

    for(int i=0;i<=n-1;i++){

        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sort0s1s2s(v);

    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";
    }

    return 0;
}