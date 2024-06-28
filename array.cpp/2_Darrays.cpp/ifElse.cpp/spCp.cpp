#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int cp;
    cout<<"Enter the cost price = ";
    cin>>cp;

    int sp;
    cout<<"Enter the seeling price = ";
    cin>>sp;

    if(sp>cp){

        int profit=sp-cp;

        cout<<"Profit = "<<profit;
    }

    else if(sp==cp){

        cout<<"No profit No loss"<<endl;
    }

    else if(sp<cp){

        int loss=cp-sp;
        cout<<" loss= "<<loss;
    }

    return 0;
}