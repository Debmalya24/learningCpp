#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
#include <limits.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int count=0;
    int max_count=0;
    
    for(int i=0;i<s.size();i++){

        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){

            count++;
        }

        else{

            max_count+=(count*(count+1))/2;
            count=0;
        }
    }

     max_count+=(count*(count+1))/2;
     cout<< max_count<<" "<<endl;

}