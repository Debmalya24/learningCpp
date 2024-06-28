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

void arrayReverse(int i,int j,vector<int>&v){

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

    n=v.size();

    int k;
    cout<<"Enter the no.of the rotation in the array : ";
    cin>>k;

    if(k>n) k=k%n;

    arrayReverse(0,(n-k-1),v);//to reverse the first (n-k) elements and k elements also;
    arrayReverse((n-k),(n-1),v);////to reverse the whole array;
    arrayReverse(0,(n-1),v);

    display(v);//to print the array;

    return 0;

}