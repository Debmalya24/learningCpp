#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){

        
        cin>>v[i];
    }

    const int N=1e5+10;

    vector<int>freq(N,0);
    for(int i=0;i<n;i++){

        freq[v[i]]++;
    }

    cout<<"quieries"<<endl;
    int quieries;
    cin>>quieries;

    while(quieries--){

        int quieryelement;
        cin>>quieryelement;

        cout<<freq[quieryelement]<<endl;

    }

    return 0;




}