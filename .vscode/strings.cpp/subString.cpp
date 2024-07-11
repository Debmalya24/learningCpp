#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    string str;
    getline(cin,str);

    int n=str.length();

    if(n%2!=0){

        cout<<"Eroor detected !!";
        return 1;
    }

    cout<<"The subset string of the second half will be => "<<str.substr(n/2)<<" "<<endl;

    return 0;
}