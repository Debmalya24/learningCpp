#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int>&v){

    for(int i=0;i<=v.size()-1;i++){

        cout<<v[i]<<" ";
    }cout<<endl;

    return;
}
int main(){

    vector<int>v1;

    int n;
    cout<<"Enter the  no elements of the array: ";
    cin>>n;

    cout<<"Enter array elements : ";

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;

        v1.push_back(ele);
    }


    int i=0;
    int j=v1.size()-1;

    while(i<=j){

        int temp=v1[i];
                v1[i]=v1[j];
                v1[j]=temp;
                i++;
                j--;

    }

    display(v1);

    return 0;
}