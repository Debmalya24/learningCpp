#include<iostream>
using namespace std;

int main(){


    int array[]={1,2,3,4,5};

    int n=5;


    int k=3;

    int ansarray[5];

    k=k%n;

    int j=0;

    //inserting last k elements

    for(int i=n-k;i<n;i++){

        ansarray[j++]=array[i];
    }

    //inserting first n-k elements in ansarray;

    for(int i=0;i<=k;i++){
        ansarray[j++]=array[i];
    }

    for(int i=0;i<n;i++){

        cout<<ansarray[i]<<" ";
    }
    cout<<endl;


    return 0;


}