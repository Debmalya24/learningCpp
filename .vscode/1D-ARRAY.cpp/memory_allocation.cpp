#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[5];

    cout<<arr<<endl;//arr is also a pointer and its indicate the first element address

    for(int i=0;i<=4;i++){

        cout<<&arr[i]<<" "<<endl; //printing the adrres of the 
    }

    return 0;

}