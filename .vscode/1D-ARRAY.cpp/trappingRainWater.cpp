#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int trappingRainWater(vector<int>&height){

    int n=height.size();

    //prev greatest element storing

     int pre[n];

     pre[0]=-1;
    int max=height[0];

    for(int i=1;i<n;i++){

        pre[i]=max;

        if(max<height[i]) max=height[i];
    }

    //next greatest element storing

    int next[n];

     next[n-1]=-1;
     max=height[n-1];

    for(int i=n-2;i>=0;i--){

        next[i]=max;

        if(max<height[i]) max=height[i];
    }

    //minimum between arrays 

 

    for(int i=0;i<n;i++){

        pre[i]=min(pre[i],next[i]);
    }

    //calculating water

    int water=0;

    for(int i=1;i<n-1;i++){

        if(height[i]<pre[i]){

            water+=(pre[i]-height[i]);
        }
    }

    return water;

}

int main(){

    int n;
    cout<<"Enter the number of the elements in the array : ";
    cin>>n;

   vector<int>height;

    for(int i=0;i<=n-1;i++){

        int ele;
        cin>>ele;
        height.push_back(ele);
    }

    cout<<trappingRainWater(height)<<" ";


    return 0;
}