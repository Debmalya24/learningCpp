#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countOfOddSubarrays(vector<int> &v){

    int result=0;

    for(int i=0;i<v.size();i++){

        int value=0;

        for(int j=i;j<v.size();j++){

            value+=v[j];

            if(value%2!=0){

                result++;
            }
        }
    }

    return(result);
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

    cout<<countOfOddSubarrays(v)<<endl;

    return 0;
}