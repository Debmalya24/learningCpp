#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int last_digit=0;
    int sum=0;

    while(n>0){

        last_digit=n%10;
        sum+=last_digit;
        n/=10;
    }

    cout<<"the sum of the digits will be = "<<sum<<endl;

    return 0;
}