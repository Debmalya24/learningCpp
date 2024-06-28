#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;//6
    
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);//1 4 6 2 8 9
    } 
    
    int x,y,z;
    cin>>x;
    cin>>y>>z;
    v.erase(v.begin()+x-1);//1 6 2 8 9
    v.erase(v.begin()+y-1,v.begin()+z-1);//1 8 9
    
    int length=v.size();//3
    cout<<length<<endl;
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
    return 0;


}