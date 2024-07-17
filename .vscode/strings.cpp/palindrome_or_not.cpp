#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

isPalindrome(string str){

    int n=str.size();
    int i=0;
    int j=n-1;

    while(i<j){

        if(str[i] !=str[j]){

            return false;
        } 
        i++;
        j--;
    }

    return true;
}

int main(){

    string str;

    cout<<"Enter the string => ";
    getline(cin,str);

    int n=str.size();


    if(isPalindrome(str)==true){

            cout<<"It is a palindrome string.";
    }
    else{

             cout<<"It is not a palindrome string.";
    }

    return 0;
}