#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    
    int left_point=0;
    int right_point=v.size()-1;

    int x;
    cout<<"X:";
    cin>>x;



    while(left_point<right_point){
        if(abs(v[left_point]-v[right_point])==x){

            cout<<"YES";
            break;
            
        }

        else if(abs(v[left_point]-v[right_point])>x){
            right_point--;

        }

        else{
            left_point++;
        }

          
    }
    
    cout<<"NO"<<endl;


    return 0;
}