#include<iostream>
using namespace std;

bool isOdd(int x){

    if(x%2==0){
        //the number is even

        return false;
    }
    else{

        return true;
        //the number is odd
    }
}

int main(){

    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){

        if(isOdd(i)){

            cout<<i<<" ";
        }
    }

    return 0;
}