#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of arrays: ";
    cin>>n;

    int array[n];

    int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){

        cin>>array[i];
    }

    int max=array[0];
    int min=array[0];
    int sum=0;


    for(int i=0;i<size;i++){

        if(array[i]>max){

            max=array[i];

        }

        else if(array[i]<min){

            min=array[i];
        }

        sum=max+min;
    }

    cout<<"The maximum number is = "<<max<<endl;
    cout<<"The mainimum number is = "<<min<<endl;
    cout<<"The sum is = "<<sum<<endl;


    return 0;
}