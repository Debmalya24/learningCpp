#include<iostream>
using namespace std;

double area(double num1,int num2,int num3){

    double result=num1*num2*num3;

    return result;
}

double circumference(int n1,double n2,int n3){

    double ans=n1*n2*n3;

    return ans;
}


int main(){

    int r;
    cout<<"Enter the radious= ";
    cin>>r;


    cout<<area(3.14,r,r)<<endl;
    cout<<circumference(2,3.14,r)<<endl;

    return 0;
}
