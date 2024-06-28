#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

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

    bool flag=true;//aray is sorted

    for(int i=0;i<=v.size()-2;i++){

        if(v[i]>v[i+1]) flag=false;//the array is unsorted

        break;
    }

    if(flag==true) cout<<"The arry is sorted "<<endl;

    for(int i=0;i<=v.size()-2;i++){

        if(v[i]>v[i+1]) flag=false;//the array is unsorted

        break;
    }

    return 0;
    

}