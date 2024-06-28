#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number where I have to print the element : ";
    cin>>n;

    int a=1;

    for(int i=1;i<=n;i++){

        cout<<a<<endl;

        a=a+2;
    }

    return 0;
}