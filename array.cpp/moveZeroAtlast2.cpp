#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void moveZero(vector<int> &v){
    int n=v.size();

    vector<int>v1;


    for(int ele:v){
        if(ele!=0){
            v1.push_back(ele);
        }
    }

    for(int ele:v){
        if(ele==0){
            v1.push_back(ele);
        }
    }

    for(int i=0;i<v1.size();i++){
      cout<<v1[i]<<" ";
    }cout<<endl;

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


    return 0;
}