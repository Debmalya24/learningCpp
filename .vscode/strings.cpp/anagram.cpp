#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

bool anagram(string s, string t){

    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){

        return true;
    }

    else {

        return false;
    }
}

int main(){

    string s;

    cout<<"the string is : ";
    getline(cin,s);

    string t;

    cout<<"the string is : ";
    getline(cin,t);

    if(anagram(s,t)==true){

        cout<<"it is a anagram.";
    }

    else{

        cout<<"it is not a anagram.";
    }

    return 0;
    
}