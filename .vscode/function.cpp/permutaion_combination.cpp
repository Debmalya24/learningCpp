#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int x){

    int fact=1;

    for(int i=2;i<=x;i++){

        fact *=i;
    }

    return fact;
}

int  permutation(int k){

    int fact=1;

    for(int i=2;i<=k;i++){

        fact*=i;

    }

    return fact;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int r;
    cout<<"Enter the number: ";
    cin>>r;


    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);

    int combination=nfact/(rfact*nrfact);
    int permutation=nfact/nrfact;
    
    cout<<combination<<" "<<endl;
    cout<< permutation<<" "<<endl;

    return 0;
}