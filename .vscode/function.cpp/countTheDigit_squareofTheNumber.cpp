#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countDigits(int x){

    int count=0;
    int lastdigit=0;

    while(x>0){

        lastdigit=x%10;
        count++;
        x=x/10;
    }

    return count;
}

int squareNumber(int y){

    int sqr=1;

    for(int i=1;i<=y;i++){

        sqr=i*i;
    }

    return sqr;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The number of the digits are: "<<countDigits(n)<<endl;

    cout<<" the square of the number is : "<<squareNumber(n)<<endl;

    return 0;
}