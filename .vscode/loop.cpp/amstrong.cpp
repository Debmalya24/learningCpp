#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int lastdigit=0;
    int a=0;

    for(int i=1;i<=n;i++){

        int p=i;
        int a=0;

        while(p>0){

             lastdigit=p%10;
             a+=lastdigit*lastdigit*lastdigit;
             
             p/=10;
        }

        if(i==a)  cout<<i<<" "<<endl;

    }

    return 0;
}