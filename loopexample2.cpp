#include<iostream>
using namespace std;

int main(){

    int i=1;


    while(i<=100){
        if(i%3==0 && i%5==0){
            cout<<"Fizzbuzz"<<endl;
        }

        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }

        else if(i%5==0){
            cout<<"Bizz"<<endl;
        }

        else{
            cout<<i<<endl;
        }

        i++;
    }

    for(int i=0;i<=100;i++){

         if(i%3==0 && i%5==0){
            cout<<"Fizzbuzz"<<endl;
        }

        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }

        else if(i%5==0){
            cout<<"Bizz"<<endl;
        }

        else{
            cout<<i<<endl;
        }


    }

    return 0;
}