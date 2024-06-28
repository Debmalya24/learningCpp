#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);


    //v.pop() function is mainly used in to pop the element of any vector
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"the size of the vector will be : "<<v.size()<<" "<<endl;
    cout<<"the capacity of the vector will be : "<<v.capacity()<<" "<<endl;

    

    return 0;
}