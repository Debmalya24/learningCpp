#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort0sand1s(vector<int>&v){

    int countZero=0;

    for(int ele:v){
        if(ele==0){
            countZero++;
        }
    }

    for(int i=0;i<v.size();i++){

        if(i<countZero){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
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

    sort0sand1s(v);
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl; 

    return 0;
}