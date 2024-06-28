#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of the elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array : ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int sum1=0;
    int sum2=0;

    for(int i=0;i<=n-1;i++){

        if(i%2==0){

            sum1+=arr[i];
        }

        else{

            sum2+=arr[i];
        }

    }

    int distance=0;

    if(sum1>sum2) distance=sum1-sum2;
    else distance=sum2-sum1;

    cout<<"The distance between  the even index and the odd index is : "<<distance<<" "<<endl;


    return 0;
}