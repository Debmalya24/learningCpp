#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;

    vector<int>v;

    for(int i=0;i<=n-1;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int x;
    cout<<"Enter the givn value: ";
    cin>>x;

    int count=0;

    bool flag=false;


    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            for(int k=j+1;k<n;k++){

                if(v[i]+v[j]+v[k]==x){

                    count++;
                    flag=true;
                }
            }
        }
    }

    if(flag==true){

        cout<<"The number of counts are : "<<count<<" "<<endl;
    }

    else{

        cout<<"there is no triplets in the array "<<" "<<endl;
    }

    return 0;
}