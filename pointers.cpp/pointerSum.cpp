#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    int x,y;

    cin>>x>>y; // taking input of x and y;

    int *ptrx=&x; //&x fetches adrress of x and then store it in ptrx;

    int *ptry=&y; //&x fetches adrress of x and then store it in ptrx;

    int result;

    int*ptr_result=&result;

    *ptr_result=*ptrx+*ptry;

    /**
     * *ptrx ->10
     * *ptry-> 20
     * 
     *  *ptrx+*ptry ->30;
     * 
     *  *ptr_result=30; we stored on the adress stored in *ptr_result;
     * 
     *  result->30; 
     * 
    */

    cout<<result<<" "<<*ptr_result<<endl;



    return 0;
}