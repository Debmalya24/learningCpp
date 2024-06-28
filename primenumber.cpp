#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int factors=0;

    for(int i=1;i<=n;i++){

        if(n%i==0){
            factors+=1;
            break;
        }
    }

    if(factors==2){
      cout<<"Prime"<<endl;
    }

    else{
        cout<<"Non prime"<<endl;
    }
    
    return 0;
}