#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int a,int b){

    int sum=a+b;

    return sum;

}

int main(){

    int a;
    cout<<"Enter the number : ";
    cin>>a;

    int b;
    cout<<"Enter the number : ";
    cin>>b;

    cout<<sum(a,b);

    return 0;
}