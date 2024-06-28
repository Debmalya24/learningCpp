#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no.of elements in the arrays: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    bool flag=true;//it is a palindrome 

    while(i<=j){

        if(arr[i] !=arr[j]){

            flag=false;//it is not a palindrome
            break;
        }

        i++;
        j--;
    }

    if(flag==true) cout<<"it is a palindrome "<<endl;
     else cout<<"it is not a palindrome"<<endl;

    return 0;
}