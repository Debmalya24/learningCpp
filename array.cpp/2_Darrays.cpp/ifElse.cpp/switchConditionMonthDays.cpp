#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x;
    cout<<"Enter the number of the month : ";
    cin>>x;

    //month : 1,3,5,7,8,10,12 =>days 31
    //month  : 4,6,9,11  =>days 30
    //month :  2 =>days 28

    switch((x<=7 && x%2 !=0) || (x>=8 && x%2==0)){

        case 1:

        cout<<"31";
        break;
    }

    switch(x==4 || x==6 || x==9 || x==11){

        case 1:

        cout<<"30";

        break;
    }

    switch(x){

        case 2:
        cout<<"28";

        break;
    }

    return 0;
}