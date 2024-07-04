#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows in the array: ";
    cin>>m;

    vector<int>v;

    for(int i=0;i<m;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int max=INT16_MIN;
    int s_max=INT16_MIN;
    int t_max=INT16_MIN;

    for(int i=0;i<m;i++){

        if(v[i]>max){
            t_max=s_max;
            s_max=max;
            max=v[i];
        }

        else if(v[i]<max && v[i]>s_max){
            t_max=s_max;
            s_max=v[i];
        }

        else if (v[i]>t_max){

           t_max=v[i];
        }
    }

    cout<<"The largest element is => "<<max<<endl;
    cout<<" The secondLargest element is => "<<s_max<<endl;
    cout<<" the thirdLargest element is => "<<t_max<<" "<<endl;


    return 0;

}