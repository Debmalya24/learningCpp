#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the numbers of students : ";
    cin>>n;

    int marks[n];

    cout<<"Enter the numbers of marks : ";

    for(int i=0;i<=n-1;i++){

        cin>>marks[i];
    }

    cout<<"The roll numbers of the students will be : ";

    for(int i=0;i<=n-1;i++){

        if(marks[i]>35) cout<<i<<" ";
    }

    return 0;
}