#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the index of  ele : ";
    cin>>n;

    int ele;
     int sum=0;
     for(int i=1;i<=n;i++){

        cout<<"enter the number : ";
        cin>>ele;
        sum=sum+ele;
    }

    cout<<"The sum of the element will be = > "<<sum<<" ";

    return 0;

}