#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"The number is= ";
    cin>>number;
    int k;
    cout<<"The multiplier is = ";
    cin>>k;
    
    
    
     for(int i=1;i<=k;i++){

        cout<<number<<" * "<<i<<" = "<<(number*i)<<endl;
     }




    return 0;


}