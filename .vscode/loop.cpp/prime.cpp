#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool flag=true;//true means prime
    for(int i=2;i<=n-1;i++){

        if(n%i==0){

            flag=false;//false means "COMPOSITE"
            break;
        }
    }
    if(n==1) cout<<"IT IS NOT COMPOSITE NEITHER PRIME"<<endl;
    else if(flag==true) cout<<n<<" IS PRIME NUMBER"<<endl;
    else cout<<n<<" IS COMPOSITE NUMBER"<<endl;

    return 0;
}