#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    if(n<0){
        cout<<n<<endl<<"The number is negative and skipped"<<endl;
    }
    else{
        cout<<"The number is positive ="<<n<<endl;
    }

    return 0;
}