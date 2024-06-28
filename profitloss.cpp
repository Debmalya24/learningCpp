#include<iostream>
using namespace std;

int main(){
    int sellprice;
    cout<<"Sell price is: "<<endl;
    cin>>sellprice;

    int costprice;
    cout<<"Cost price is : "<<endl;
    cin>>costprice;

    if(sellprice>costprice){
        int profit;
        profit=sellprice-costprice;
        cout<<"The profit is: "<<profit<<endl;
    }

    else if(sellprice<costprice){
        int loss;
        loss=costprice-sellprice;
        cout<<"The loss is: "<<loss<<endl;
    }
    else{
        cout<<"No profit no loss"<<endl;
    }

    return 0;
}