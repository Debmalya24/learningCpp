#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort0s1s2s(vector<int>&v){
    int n=v.size();
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){

        if(v[mid]==2){

            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;

            high--;
        }

        else if(v[mid]==0){

            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;

            low++;
            mid++;
        }

        else{

            mid++;
        }
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