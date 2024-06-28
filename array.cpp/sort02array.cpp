#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void shortZeroAndOne(vector<int> &v){

    int left_point=0;
    int right_point=v.size()-1;

    while(left_point<right_point){

        if(v[left_point]==1 && v[right_point]==0){

            v[left_point++]=0;
            v[right_point--]=1;
        }

        if(v[left_point]==0){

            left_point++;
        }

        if(v[right_point]==1){
            right_point--;
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

    shortZeroAndOne(v);

    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}
