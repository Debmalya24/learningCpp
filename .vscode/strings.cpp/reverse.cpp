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

    //length size

    int n=str.length();

    if(n<=5){

        cout<<"Error : can not reverse it ."<<endl;
        return 1;
    }
    
    //reverse

    reverse(str.begin()+1,str.begin()+5);

    cout<<"the new string is => "<<str<<endl;

    return 0;
}