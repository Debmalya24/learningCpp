#include<iostream>
using namespace std;

int main(){

    int row,column;
    cout<<"Enter the row number = ";
    cin>>row;
    cout<<"Enter the column number = ";
    cin>>column;


    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){

            if((i+j)%2==1){

                cout<<".";
            }

            else{

                cout<<"*";
            }
        }

        cout<<endl;
    }

    return 0;
}