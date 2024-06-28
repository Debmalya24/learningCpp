#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;//enter odd number
    int middle =(n+1)/2;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            if(i==middle){

                cout<<" * ";
            }

            else{

                if(j==middle){

                    cout<<" * ";
                }

                else{

                    cout<<"   ";
                }
            }


        }

        cout<<endl;
    }


}