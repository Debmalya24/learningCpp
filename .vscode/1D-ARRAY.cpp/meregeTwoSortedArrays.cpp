#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int>merge(vector<int>&v1,vector<int>&v2){

    int n=v1.size();
    int m=v2.size();

    vector<int>res(m+n);

    int i=0;
    int j=0;
    int k=0;

    while(i<=n-1 && j<=m-1){

        if(v1[i]<v2[j]){

            res[k]=v1[i];
            i++;
            k++;
        }

        else{

            res[k]=v2[j];
            j++;
            k++;
        }

        
    }

    if(i==n){

        while(j<=m-1){

            res[k]=v2[j];
            k++;
            j++;
        }
    }

    if(j==m){

        while(i<=n-1){

            res[k]=v1[i];
            k++;
            i++;
        }
    }

    return res;
}

int main(){

    int n1;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n1;

    vector<int>v1;

    for(int i=0;i<n1;i++){

        int ele;
        cin>>ele;
        v1.push_back(ele);
    }

    int n2;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n2;

    vector<int>v2;

    for(int i=0;i<n2;i++){

        int ele;
        cin>>ele;
        v2.push_back(ele);
    }

    vector<int>v=merge(v1,v2);

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }

    return 0;
}