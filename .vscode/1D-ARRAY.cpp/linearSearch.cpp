#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the numbers of the elemts : ";
    cin>>n;

    int arr[n];

    cout<<"The elements are: ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element : ";
    cin>>x;

    bool flag=false;

    for(int i=0;i<=n-1;i++){

        if(arr[i]==x)  flag=true;
    }

    if(flag==true) cout<<"element found";

    else  cout<<"404 not found";

    return 0;

}