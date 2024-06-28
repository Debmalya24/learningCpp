#include<iostream>
using namespace std;

int main(){

    int a=4;
    cout<<sizeof(a)<<endl;//4

    char name='a';
    cout<<sizeof(name)<<endl;//4


    bool flag;
    a==name? flag=true :flag=false;
    cout<<flag<<endl;//false(0)

    cout<<(&a)<<endl;

    float d=4.56;
    cout<<int(d)<<endl;


    int c=6;
    cout<<(c++)<<endl;//6

    int b=c+5;
    cout<<b<<endl;//12


    return 0;
}