#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum_in_range(int x,int y){

    int result=0;

    for(int i=x;i<=y;i++){

        result+=i;
    }

    return result;
}

int sum_in_range_optimise(int x,int y){

    int n=(y-x+1);
    int a=x;
    int d=1;
    int Sum=(n*(2*a+(n-1)*d))/2;

    return Sum;
}
int main(){

    cout<<sum_in_range(2,6);

    return 0;
}