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

    int max=INT16_MIN;
    int s_max=INT16_MIN;
    int third_max=INT16_MIN;

    for(int i=0;i<=v.size()-1;i++){

        if(v[i]>max){

            max=v[i];
        }
    }

     for(int i=0;i<=v.size()-1;i++){

        if(v[i]>s_max && v[i] !=max  ){

           s_max=v[i];
        }
    }


    for(int i=0;i<=v.size()-1;i++){

        if(v[i]>third_max && v[i] !=max && v[i]!=s_max  ){

           third_max=v[i];
        }
    }

    cout<<"the largest three elements are :  "<<"("<<max<<","<< s_max<<","<<third_max<<")"<<endl;

    return 0;


}