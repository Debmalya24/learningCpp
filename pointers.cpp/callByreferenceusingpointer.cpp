#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void findFirstAndLastIndex(string s,char ch,int *first,int *last){

    for(int i=0;i<s.size();i++){

        if(s[i]==ch){

            *first=i;
            break;
        }
    }

    for(int i=s.size()-1;i>=0;i--){

        if(s[i]==ch){

            *last=i;
            break;
        }
    }
}

int main(){
    
    string s="aaabac";

    char ch='a';

    int first=-1;
    int last=1;

    int *ptf=&first;

    int *ptl=&last;

    findFirstAndLastIndex(s,ch,ptf,ptl);

    cout<<*ptf<<" "<<*ptl<<" "<<endl;

    cout<<first<<" "<<last<<" "<<endl;

    return 0;
}