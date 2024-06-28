#include<iostream>
using namespace std;

int main(){

    int array[]={3,4,5,8};

    int size=(sizeof(array)/sizeof(array[0]));

    int sum=0;

    for(int idx=0;idx<size;idx++){

        sum+=array[idx];

    }

    cout<<sum<<endl;

    return 0;
}