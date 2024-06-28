#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value:  ";
    cin>>n;

    if(n<0){
        
        n=n*(-1);
        cout<<"Absolute value is: "<<n<<endl;
    }

    return 0;
}