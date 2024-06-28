#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool  subSet(vector<int>&v1,vector<int>&v2){

    int n=v1.size();
    int m=v2.size();

    int i=0;
    int j=0;

    for( i=0;i<=m-1;i++){

        for( j=0;j<=n-1;j++){

            if(v2[i]==v1[j]){
                break;
            }

            else if(j==n-1){
               return 0;
               
            }
        }

    }
    

    return 1;
}
int main(){

     int n1;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n1;

    vector<int>v1;

    for(int i=0;i<n1;i++){

        int ele;
        cin>>ele;
        v1.push_back(ele);
    }

    int n2;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n2;

    vector<int>v2;

    for(int i=0;i<n2;i++){

        int ele;
        cin>>ele;
        v2.push_back(ele);
    }

    bool ans=subSet(v1,v2);

    if(ans==true){
        cout<<"There is  subset of array";
    }
    else{

         cout<<"there is no  subset of array";
    }


}