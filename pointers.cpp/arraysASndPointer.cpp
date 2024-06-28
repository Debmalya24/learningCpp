#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[3]={15,12,6};
    int n=3;

    int *ptr=&arr[0];

    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<" "<<endl;

    cout<<*(arr+0)<<" " <<*(arr+1)<<" "<<*(arr+2)<<" "<<endl;

    for(int i=0;i<n;i++){

        cout<<*(arr+i)<<endl;
    }

    return 0;
}