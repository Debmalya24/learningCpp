#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedSqareArray(vector<int> &v){

    vector<int>ans;

    int left_side=0;
    int right_side=v.size()-1;

    while(left_side<=right_side){

        if(abs(v[left_side])<abs(v[right_side])){

            ans.push_back(v[right_side]*v[right_side]);
            right_side--;
        }

        else{
            ans.push_back(v[left_side]*v[left_side]);
            left_side++;
        }
        
    }

    reverse(ans.begin(),ans.end());
    

    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    return;
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

    sortedSqareArray(v);

    

    return 0;
}