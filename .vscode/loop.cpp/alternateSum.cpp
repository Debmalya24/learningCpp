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

    for(int i=1;i<=n;i++){

        if(i%2 !=0) sum+=i;

        else sum-=i;
    }

    cout<<"Sum is : "<<sum<<endl;

    return 0;
}