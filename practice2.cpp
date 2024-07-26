#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
#include <limits.h>
#include<set>

int main(){

  string str;
  cout<<"enter the string : ";
  getline(cin,str);
  string s="";

  for(int i=0;i<str.size();i++){

    if(i%2 !=0){

      s=s+str[i];
    }
  }

  //cout<<s<<endl;

  return 0;
}

