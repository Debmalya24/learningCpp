#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<" =length of array"<<endl;

    int array2[4];
    cout<<array2[0]<<endl;
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;
    

    
    return 0;
}