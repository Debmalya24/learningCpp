#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

   int n;
   cout<<"Enter the number of rows: ";
   cin>>n;

   for(int i=1;i<=n;i++){

      for(int j=1;j<=i;j++){

         cout<<"*"<<" ";//for printing the first 'n' rows of startriangle; 
      }
      cout<<endl;
   }

   for(int i=1;i<=n;i++){

      for(int j=1;j<=n-i;j++){

         cout<<"*"<<" ";//for printing the last'n-1'rows of revers stars triangle
      }
      cout<<endl;
   }

   

   return 0;
}