#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    cout<<"The elements will be : ";

    int arr[n];

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int max=INT16_MIN;

    for(int i=0;i<=n-1;i++){

        if(max<arr[i]) max=arr[i];
    }

    int s_max=INT16_MIN;

    for(int i=0;i<=n-1;i++){

        if(s_max<arr[i] && max !=arr[i]) s_max=arr[i];
    }

    cout<<"the second largest number will be: " <<s_max<<" "<<endl;

    return 0;
}