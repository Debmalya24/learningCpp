#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

bool isConsonent(char ch){

    if(ch<65) return false;

    else if(ch>90 && ch<97) return false;

    else if(ch>122) return false;

    else if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||
            ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'  ) return false;

    else return true;

}

int main(){

    string str;

    cout<<"Enter the string => ";
    getline(cin,str);

    int count =0;

    for(int i=0;i<str.size();i++){

        if(isConsonent(str[i])==true){

        count++;
    }
    }

    cout<<"The total number of consonant will be : "<<count<<endl;

    return 0;
}