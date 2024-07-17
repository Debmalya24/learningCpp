#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"enter the no of the string : ";
    cin>>n;
    cin.ignore();

    vector<string>arr(n);

    cout<<"enter the string elements : ";

    for(int i=0;i<n;i++){

        getline(cin , arr[i]);
    }

    int max=stoi(arr[0]);
    string max_string=arr[0];
    int max_index=0;

    for(int i=1;i<n;i++){
        int x=stoi(arr[i]);

        if(x>max){

            max=x;
            max_string=arr[i];
            max_index=i;
        }
    }

    cout<<"the maximum index will be => "<<max<<endl;
    cout<<"the maximum string will be => "<<max_string<<endl;
    cout<<"the maximum index will be => "<<max_index<<endl;

    return 0;
}