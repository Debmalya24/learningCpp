#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of the Note : ";
    cin>>n;

    int total=0;

    int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0;
    int n100=0, n200=0, n500=0;
    int n2000=0;


    if(n>=2000){

        n2000=n/2000;
        n-=n2000*2000;
    }

    if(n>=500){

        n500=n/500;
        n-=n500*500;
    }

    if(n>=200){

        n200=n/200;
        n-=n200*200;
    }

    if(n>=100){

        n100=n/100;
        n-=n100*100;
    }

    if(n>=50){

        n50=n/50;
        n-=n50*50;
    }

    if(n>=20){

        n20=n/20;
        n-=n20*20;
    }

    if(n>=10){

        n10=n/10;
        n-=n10*10;
    }

    if(n>=5){

        n5=n/5;
        n-=n5*5;
    }

    if(n>=2){

        n2=n/2;
        n-=n2*2;
    }

    if(n>=1){

        n1=n/1;
        n-=n1*1;
    }

    total=n2000+n500+n200+n100+n50+n20+n10+n5+n2+n1;

    cout<<"The total number of notes : "<<total<<endl;

    return 0;

}