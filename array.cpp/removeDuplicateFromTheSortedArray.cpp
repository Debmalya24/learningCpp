#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i=0;i<v.size();i++){

        for(int j=i+1;j<v.size();j++){

            if(v[i]==v[j]){

                while(j<n){
                    v[j]=v[j+1];
                    j++;
                }
                --n;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;


    return 0;
}