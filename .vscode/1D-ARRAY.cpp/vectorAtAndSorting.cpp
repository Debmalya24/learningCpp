#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    vector<int>v;

    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    v.push_back(1);

    //at function is used returns a reference to the element present 
    //at the index number given as a parameter

    for(int i=0;i<v.size();i++){

        cout<<v.at(i)<<" ";
    }cout<<endl;

    //sorting  function is used in vector to sort any array or vector

    sort(v.begin(),v.end());

    cout<<"after sorting the array will be : ";

    for(int i=0;i<=v.size()-1;i++){

        cout<<v.at(i)<<" ";
    }cout<<endl;



    return 0;

}