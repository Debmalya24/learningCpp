#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maximumandMinNumber(int a,int b,int c){

    int *ptra=&a;

    int *ptrb=&b;

    int *ptrc=&c;

    if(*ptra>*ptrb && *ptra>*ptrc){

        return *ptra;
    }

    else if(*ptrb>*ptrc){

        return *ptrb;
    }
    else{

        return *ptrc;
    }
    
}

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    cout<<maximumandMinNumber(a,b,c)<<endl;

    return 0;
}