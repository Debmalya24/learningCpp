#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int triplet=0;
    

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){

                if((v[i]+v[j]+v[k])%3==0){
                    triplet++;
                    
                    
                }
            }
        }
    }

    cout<<"The triplets are :"<<triplet<<endl;
 

    return 0;
}