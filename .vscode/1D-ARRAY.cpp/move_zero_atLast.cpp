#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void  movesZeroAtEnd(vector<int>&v){

    int i=0;
    int j=v.size()-1;

    while(i<j)
    {

        if(v[i]!=0) i++;
        else if(v[j]==0)j--;

        else{

            if(v[i]==0 & v[j]!=0){

                swap(v[i],v[j]);
                i++;
                j--;
            }
        }
    }

    return;
}

int main(){

    vector<int>v;

    int n;
    cout<<"Enger the no. of the elements in the array: ";
    cin>>n;

    cout<<"Enter the elements : ";

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    movesZeroAtEnd(v);

    cout<<"The updated array will be : ";

    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";
    }

    return 0;
}