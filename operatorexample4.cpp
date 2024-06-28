#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a 3 digits number : ";
    cin>>n;

    int first;
    first=n/100; //first digit
    n=n%100;
    cout<<"the first digit: "<<first<<endl;

    int second,third;
    second=n/10;//second digit
    third=n%10;//third digit
    cout<<"The second digit: "<<second<<endl;
    cout<<"The third digit: "<<third<<endl;

    int sum;
    sum=first+second+third;//6
    cout<<"sum of the digits: "<<sum<<endl;

    return 0;




}