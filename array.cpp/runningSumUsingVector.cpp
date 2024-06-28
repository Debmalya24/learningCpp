#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void runningSum(vector<int> &v){

    for(int i=1;i<v.size();i++){

        v[i]+=v[i-1];       //5 (4+5)=9 1 2 3; 5 9 (9+1)=10 2 3; 5 9 10 (10+2)=12 3;5 9 10 12 (12+3)=15;
                    
    }

    return;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;           //5 4 1 2 3

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    runningSum(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;               //5 9 10 12 15

    return 0;
}