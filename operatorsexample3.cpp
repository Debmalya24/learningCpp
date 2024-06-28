#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any five digits number: ";
    cin>>n;

    int first;
    first=n/10000;
    n=n%10000;

    int second;
    second=n/1000;
    n=n%1000;

    int third;
    third=n/100;
    n=n%100;

    int fourth;
    int fifth;
    fourth=n/10;
    fifth=n%10;

    cout<<"the first didgit: "<<first<<endl;
    cout<<"The second last digit: "<<fourth<<endl;


    int sum;
    sum=first+fourth;
    cout<<"The sum of the first and the second last digit is : "<<sum<<endl;


    return 0;



}