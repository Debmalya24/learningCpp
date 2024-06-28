#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    for(int i=a;i<=b;i++){

        int sum=0;
        int t=i;

        while(t!=0){

            int lastdigit=t%10;
            sum+=pow(lastdigit,3);
            t=t/10;

        }

        if(sum==i){

            cout<<i<<endl;
        }

    }
    return 0;
}