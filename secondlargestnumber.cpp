#include<iostream>
using namespace std;

int largestElementIndex(int array[],int size){

    int max=INT16_MIN;
    int maxiindex=-1;

    for(int i=0;i<size;i++){

        if(array[i]>max){

            max=array[i];
            maxiindex=i;

        }
    }

    return maxiindex;

}


int main(){

    int n=7;

    int array[]={2,3,5,7,6,1,7};
    int indexoflargest=largestElementIndex(array,n);

    cout<<array[indexoflargest]<<endl;

    int largestelemenet=array[indexoflargest];
    for(int i=0;i<7;i++){
        if(array[i]==largestelemenet){

            array[i]=-1;
        }
    }
    

    int indexofsecondlargest=largestElementIndex(array,n);

    cout<<array[indexofsecondlargest]<<endl;


    return 0;

}