#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count=0;
    int a=n;

    while(n>0){

        n/=10;
        count++;
    }

    if(a==0) cout<<"Total counts oof the digits will be => "<<1<<endl;
    else cout<<"Total counts oof the digits will be => "<<count<<endl;

    return 0;
}