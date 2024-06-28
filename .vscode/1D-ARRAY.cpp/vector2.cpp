#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    vector<int>v;

    v.push_back(6);//1 1
    v.push_back(7);//2 2
    v.push_back(8);//3 4
    v.push_back(9);//4 4
    v.push_back(10);//5 8
    cout<<v.size()<<" "<<endl; //to determine the size of the vector
    cout<<v.capacity()<<" "<<endl;// to determine the capacity of the vector

    return 0;
}