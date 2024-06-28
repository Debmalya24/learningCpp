#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    vector<int>v;

    int n;
    cout<<"The numbers of elements in the vector : ";
    cin>>n;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int x;
    cout<<"the element in the vector is : ";
    cin>>x;

    int idx=-1;

    for(int i=v.size()-1;i>=0;i--){

        if(v[i]==x) idx=i;
        cout<<"The index is : "<<idx<<" "<<endl;
        break;
    }

    return 0;
}