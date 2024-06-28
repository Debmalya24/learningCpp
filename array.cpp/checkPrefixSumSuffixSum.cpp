#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkPrefixSumSuffixSum(vector<int> &v){

    int total_sum=0;
    for(int i=0;i<v.size();i++){

        total_sum+=v[i];    //16
    }

    int prefix_sum=0;

    for(int i=0;i<v.size();i++){

        prefix_sum+=v[i];        //6 ;(6+2)=8;

        int suffix_sum=(total_sum-prefix_sum);  //(16-6=10); (16-8=8)  
           
        
        if(suffix_sum==prefix_sum){            //prefix_sum<suffix_sum ; prefix_sum=suffix_sum;

            return true;
        }

    }

    return false;
}

int main(){
    int n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);  //6 2 4 3 1
    }

    cout<<checkPrefixSumSuffixSum(v)<<endl;


    return 0;
}