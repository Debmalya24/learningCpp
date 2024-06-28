#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>&v){

    int n=v.size();

    for(int i=0;i<n-1;i++){
      //finding minimum elements in the array
        int min_number=i;

        for(int j=i+1;j<n;j++){

            if(v[j]<v[min_number]){

                min_number=j;
            }

        }

        //passing minimum elements at the begining 

        if(i!=min_number){

                swap(v[i],v[min_number]);
        }
    }

    return;
}

int main(){

    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){

        cin>>v[i];
    }

    selectionSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}