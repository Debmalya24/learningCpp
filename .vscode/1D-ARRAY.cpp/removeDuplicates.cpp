#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows in the array: ";
    cin>>m;

    vector<int>v;

    for(int i=0;i<m;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int i=0;

    for(int j=1;j<m;j++){

        if(v[i] != v[j]){

            v[i+1]=v[j];

            i++;
        }
    }

    cout<<"After removing the doublets the total number of the elements will be : "<<i+1<<endl;


    return 0;

}