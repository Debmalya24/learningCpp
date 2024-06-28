#include<iostream>
#include <algorithm>
#include<vector>
using namespace std; 


int main(){


    vector<int>v;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int k=3;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    

    for(int ele:v){

        cout<<ele<<" ";
    }cout<<endl;

    return 0;

}