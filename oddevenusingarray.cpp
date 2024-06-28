#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){

        cin>>arr[i];
    }

    int countofodd=0;
    int countofeven=0;
    int odd,even;

    for(int i=0;i<size;i++){

        if(arr[i]%2==0){

            countofeven++;
        }

        else{

            countofodd++;
        }

    }

    cout<<"Count of Even is: "<<countofeven<<endl;
    cout<<"Count of odd is: "<<countofodd<<endl;


    return 0;
}