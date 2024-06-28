#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap_numbers(int a,int b){

    int temp=a;
    a=b;
    b=temp;

    cout<<a<<" "<<b<<" ";

    return;

}

int main(){

    int a;
    cout<<"Enter the first number : ";
    cin>>a;

    int b;
    cout<<"Enter the second number :";
    cin>>b;

    swap_numbers(a,b);

    

    return 0; 
}