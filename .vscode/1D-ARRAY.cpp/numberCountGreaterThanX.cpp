#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    vector<int>v;

    int n;
    cout<<"Enger the no. of the elements in the array: ";
    cin>>n;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int x;
    cout<<"Enter the target element: ";
    cin>>x;

    int count=0;

    for(int i=0;i<=v.size()-1;i++){

        if(v[i]>x){

            count++;
        }
    }

    cout<<"The count o the numbers strictly greater than the target element is : "<<count<<" "<<endl;

    return 0;
}