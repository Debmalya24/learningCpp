#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

   int m;
   cout<<"Enter the numbers of rows : ";
   cin>>m;

   int n;
   cout<<"Enter the numbers of columns : ";
   cin>>n;

   for(int i=1;i<=m;i++){

      for(int j=1;j<=n;j++){

         if(i==1 || i==m || j==1 || j==n) cout<<"*";

         else cout<<" ";

        
      }

      cout<<endl;
   }

   

   return 0;
}