#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the total number where I have to print the element : ";
    cin>>n;

    int a=1;

    //6th time;a=1,2,4,8,16,32;


    for(int i=1;i<=n;i++){

        cout<<a<<endl;

        a=a*2;
    }

    return 0;

}