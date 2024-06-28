#include<iostream>
using namespace std;

int main(){

   int n,m;

   cout<<"Enter the elements of array= ";
   cin>>n;

   int array[n];

    int size=sizeof(array)/sizeof(array[0]);
    
   for(int i=0;i<size;i++){

        cin>>array[i];
    }

   

    int targetsum=m;
    cout<<"The target sum is= ";
    cin>>m;

    int pairs=0;


    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            if(array[i]+array[j]==m){

                pairs++;
            }
        }
    }

    cout<<"The Pairs are ="<<pairs<<endl;


    return 0;
}