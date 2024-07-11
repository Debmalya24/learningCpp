#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>> num;

    //using to_string function to make int into string 
    string s=to_string(num);
    
    //finding the length of the number, because it will be the total number of digits
    int n=s.length();

    cout<<"The total number of digits will be : "<<n<<endl;

    return 0;
}