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

    return ;
}

void reversePart(int i,int j,vector<int>&v){

    while(i<=j){

        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

   

    return;
}

int main(){

    vector<int>v;

    int n;
    cout<<"Enger the no. of the elements in the array: ";
    cin>>n;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    display(v);

    reversePart(0,4,v);

    display(v);

    return 0;

}