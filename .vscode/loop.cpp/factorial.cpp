#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int product=1;

    for(int i=1;i<=n;i++){

        product*=i;
    }

    cout<<"the factorial will be => "<<product<<endl;
    return 0;
}