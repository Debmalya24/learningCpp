#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortingoddeven(vector<int>&v){

    int left_point=0;
    int right_point=v.size()-1;

    while(left_point<right_point){

        if(v[left_point]%2==1 && v[right_point]%2==0){

            swap(v[left_point],v[right_point]);

            left_point++;
            right_point--;
        }

        if(v[left_point]%2==0){

            left_point++;
        }

        if(v[right_point]%2==1){
            right_point--;
        }
    }

    return ;
}


int main(){
    int n;
    cin>>n;
    
    vector<int>v;

    for(int i=0;i<n;i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortingoddeven(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}