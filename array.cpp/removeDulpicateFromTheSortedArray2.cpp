#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int removeDuplicates(int array[], int n){

    if(n==0 || n==1){
        return n;
    }


    int j=1;
    for(int i=1;i<n;i++){
        if(array[i]!=array[i-1]){

            array[j++]=array[i];
        }
    }
    
    return j;
}

int main(){

    int array[]={1,2,2,3,3,4,5};
    int n=sizeof(array)/sizeof(array[1]);

    n=removeDuplicates(array,n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;

}