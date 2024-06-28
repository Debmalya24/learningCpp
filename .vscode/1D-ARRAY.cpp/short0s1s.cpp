#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort0s1s(vector<int>&v){

    int no_zero=0;
    int no_one=0;
    int n=v.size();

    for(int i=0;i<n;i++){

        if(v[i]==0) no_zero++;
        else no_one++;
    }

    //filling elements

    for(int i=0;i<n;i++){

        if(i<no_zero) v[i]=0;
        else v[i]=1;
    }

    return;

    
}

void sort_one_zero(vector<int>&v){

    int n=v.size();
    int i=0;
    int j=n-1;

    for(int i=0;i<=n-1;i++){

        if(v[i]==0) i++;
        if(v[j]==1) j--;

        if(i<j) break;

        if(v[i]==1 && v[j]==0){

            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }

    return;
}


int main(){

    int n;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sort0s1s(v);

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }
    sort_one_zero(v);

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }

    return 0;
}