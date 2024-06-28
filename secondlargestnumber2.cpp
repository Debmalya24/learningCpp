#include<iostream>
using namespace std;

int secondlargest(int array[],int size){

    int max=INT16_MIN;
    int second_max=INT16_MIN;

    for(int i=0;i<size;i++){
        if(array[i]>max){

            max=array[i];
        }
    }

    for(int i=0;i<size;i++){

        if(array[i]>second_max && array[i]!=max){

            second_max=array[i];
        }
    }
    return second_max;
}

int main(){

    int n=7;


    int array[]={2,3,5,7,6,7,1};
    cout<<secondlargest(array,n)<<endl;

    return 0;

}