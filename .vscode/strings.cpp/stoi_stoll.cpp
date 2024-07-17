#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){

    //string to integer

    string str="1234";
    int x=stoi(str);
    cout<<x<<" "<<endl;

    //integer to string

    int num=1235;
    string s=to_string(num);
    cout<<s<<" "<<endl;

    //string to long long
    string p="12345678912";
    long long y=stoll(p);
    cout<<y<<" "<<endl;

    return 0;
}