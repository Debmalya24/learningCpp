#include<iostream>
using namespace std;

double area(int r){

    double ar=3.14*r*r;

    return ar;

}

double circumference(int r){
    double cir=2*3.14*r;
    return cir;
}

int main(){

    int r;
    cout<<"Enter the radious= ";
    cin>>r;


    cout<<"Area :"<<area(r)<<endl;
    cout<<"Circumferencem :"<<circumference(r)<<endl;

    return 0;



}