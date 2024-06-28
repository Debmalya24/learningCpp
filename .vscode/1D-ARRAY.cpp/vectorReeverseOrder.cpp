#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> &a){

    for(int i=0;i<=a.size()-1;i++){

        cout<<a[i]<<" ";
    }cout<<endl;

    return ;
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

    display(v1);

    vector<int>v2(v1.size());

    for(int i=0;i<=v2.size()-1;i++ ){

        v2[i]=v1[v1.size()-1-i]; //i+j=v.size()-1;
    }

    display(v2);

    return 0;


}