#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool absoluteDifferenceInVector(vector<int> &v){
    int x;
    cout<<"X:";
    cin>>x;

    int left_point=0;
    int right_point=1;

    while(left_point<v.size() && right_point<v.size()){

        if(v[right_point]-v[left_point]==x){

            return 1;
            break;
        }
        else if(v[right_point]-v[left_point]<x){

            right_point++;
        }
        else{
            left_point++;
        }
    }
    return 0;

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

    if(absoluteDifferenceInVector(v)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}