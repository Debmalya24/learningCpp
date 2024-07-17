#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int   linearSearch(vector<int>&v,int x){

    int n=v.size()-1;

    for(int i=0;i<n;i++){

        if(v[i]==x){

            return i;
            break;
        }
    }
    return -1;
}

int main(){

    vector<int>v;

    int n;
    cout<<"Enger the no. of the elements in the array: ";
    cin>>n;

    cout<<"Enter the elements : ";

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    //linearSearch(v);

    int s;
    cout<<"the element which have to search in the array is : ";
    cin>>s;

    int index =linearSearch(v,s);

    if(index!=-1){

        cout<<"the index of the element is "<<index<<endl;
    }

    else{

          cout<<"the element is not present"<<endl;
    }


    return 0;
}