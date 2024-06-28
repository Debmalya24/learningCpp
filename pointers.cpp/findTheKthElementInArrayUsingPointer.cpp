#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main(){
  int n;//4
  cout<<"The size of the array is: ";
  cin>>n;

  int k;//3
  cout<<"The position of the element = "; 
  cin>>k;

  int arr[n];

  for(int i=0;i<n;i++){

    cin>>arr[i];//10 3 20 52
  }

  int *ptr=arr+(k-1);

   cout<<*ptr<<endl;

  return 0;

}