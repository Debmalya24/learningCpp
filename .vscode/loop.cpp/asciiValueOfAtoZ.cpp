#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of ascii value : ";
    cin>>n;

    int i=0;

    while(i<26){

        cout<<"ASCII value of "<<(char) (i+'A')<<" is "<<(int)(i+'A')<<endl;

        i++;
    }

    return 0;
}