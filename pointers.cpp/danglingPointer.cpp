#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int *ptr=NULL;
    {

        int x=10;

        ptr=&x;
    }

    cout<<ptr<<endl;
    
    return 0;
}