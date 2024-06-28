#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cout<<"Enter thr number: ";
    cin>>n;

    int p=n;

    int sum=0;
    int r=0;

    while(n>0){

        int lastdigit=n%10;
        r=r*10;
        r=r+lastdigit;
        n/=10;
    }


    sum=p+r;

    cout<<"The sum of the number "<<p<<" and it's reverse "<<r<< "is "<<sum<<endl;

    return 0;
}