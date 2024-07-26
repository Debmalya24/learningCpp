#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;

int main(){
   int num;
   cout<<"Enter the number: ";
   cin>>num;

   int binary[32];//32 bit indexing
   int index=0;

   while(num>0){

    binary[index]=num%2;
    num/=2;
    index++;
   }

   for(int i=index-1;i>=0;i--){
    cout<<binary[i]<<" ";
   }

   return 0;
}