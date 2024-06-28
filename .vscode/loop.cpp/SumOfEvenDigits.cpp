#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the digit : ";
    cin>>n;

    int sum=0;

    while(n>0){

        int lastdigit=n%10;
        if(lastdigit%2==0) sum+=lastdigit;

        n/=10;
    }

    cout<<"The sum of the even digits will be : "<<sum <<endl;
    return 0;

}