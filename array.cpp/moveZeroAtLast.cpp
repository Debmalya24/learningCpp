#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void moveZero(vector<int> &v){
    int n=v.size();

    int j=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }


    return;
}


int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    moveZero(v);

    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}