#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void  nonRepeatingElements(vector<int>&v){

    int n=v.size();

    bool flag=true;

    for(int i=0;i<n;i++){

        int j;

        for( j=0;j<n;j++){

            if(i !=j && v[i]==v[j]){

                flag=false;//the element has a duplicates

                break;
            }
        }

        if(j==n){

             cout<<"the non repeating element is : "<<v[i]<<" ";
             flag=true;
             break;

        }


    }

    if(flag=false) cout<<"there is no non repeating elelment"<<endl;


    return;
}

int main(){

     int n;
    cout<<"Enter the no.of elements in the array : ";
    cin>>n;
     vector<int>v;

    cout<<"Enter the elements : ";

    for(int i=0;i<=n-1;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    nonRepeatingElements(v);

    return 0;
}