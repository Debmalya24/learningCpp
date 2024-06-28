#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

bool vectorsumpair(vector<int>&v){
    int x;
    cout<<"X:";
    cin>>x;


    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){

            if(v[i]+v[j]==x){

                return 1;
            }
        }
    }

    return 0;
} 

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    if(vectorsumpair(v)){
        cout<<"Yes";
    }

    else{
        cout<<"NO";
    }
    
    return 0;
}