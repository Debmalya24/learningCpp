#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    int a=1;
    int b=1;

    for(int i=1;i<=n-2;i++){

        sum=a+b;
        a=b;
        b=sum;

    }

    cout<<"The fibbonaci sum will be : "<<b;
    return 0;
}