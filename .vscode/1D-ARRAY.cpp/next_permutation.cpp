#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void next_permutation(vector<int>&v){

    int n=v.size();
    int idx=-1;

    //1.finiding pivot index 

    for(int i=n-2;i>=0;i--){

        if(v[i]<v[i+1]){

            idx=i;
            break;
        }
    }

    //2.if the array is already greatest

    if(idx==-1) {

        reverse(v.begin(),v.end());

        return;
    }

    //3.sorting after the pivot index

    reverse(v.begin()+(idx+1),v.end());

    //4.find the just greater elements than idx

    int j=-1;

    for(int i=idx+1;i<=n-1;i++){

        if(v[i]>v[idx]){

            j=i;

            break;
        }

    }

    //5.swapping idx and idx+1;
    int temp=v[idx];

    v[idx]=v[j];

    v[j]=temp;


    return;
}

int main(){

    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    vector<int>v;

    for(int i=0;i<=n-1;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    next_permutation(v);

    for(int i=0;i<=n-1;i++){

        cout<<v[i]<<" ";
    }

    return 0;
}