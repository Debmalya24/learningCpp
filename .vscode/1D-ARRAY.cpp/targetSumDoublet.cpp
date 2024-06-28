#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){


    vector<int>v;

    int n;
    cout<<"The numbers of elements in the vector : ";
    cin>>n;

    cout<<"Enter array elements : ";

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int x;
    cout<<"the target element in the vector is : ";
    cin>>x;

    int doublet=0;

    for(int i=0;i<=v.size()-2;i++){

        for(int j=i+1;j<=v.size()-1;j++){

            if(v[i]+v[j]==x){

                doublet++;

                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

    cout<<"The number of pair will be : "<<doublet<<" "<<endl;

    return 0;
}