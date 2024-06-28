#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }


    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){

            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    


    return 0;
}