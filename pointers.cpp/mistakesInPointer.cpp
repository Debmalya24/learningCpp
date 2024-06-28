#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x=9;

    int y=2;

    int *ptr= &x;

    //ptr=5;  we can do this because ptr inly store adrees ,nothing else;

    //*ptr = &y; rhis will not workas we cannot store adress in ant in bucket;

    cout<<"Adress of x: "<<&x<<endl;

    cout<<"adress stored inside ptr : "<<ptr<<endl;

    cout<<"Adress of ptr itself: "<<&ptr<<endl; //prints the adress of the ptr bucket not the adress stored in ptr;


    return 0;
}