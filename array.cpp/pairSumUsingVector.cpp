#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int PairSumUsingVector(vector<int> &v){

    int x;
    cout<<"X:";
    cin>>x;


    int paris=0;
    int left_point=0;
    int right_point=v.size()-1;

    int pairs=0;

    while(left_point<right_point){

        if(v[left_point]+v[right_point]==x){
            
            pairs++;

            left_point++;
            right_point--;
            
        }

        else if(v[left_point]+v[right_point]<x){
            left_point++;
        }

        else{
            right_point--;
        }
    }

    return pairs;


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

    cout<<PairSumUsingVector(v)<<endl;

    return 0;
}