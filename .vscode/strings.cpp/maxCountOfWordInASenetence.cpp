#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;

int main(){

    string str;
    cout<<"enter the string sentence => ";
    getline(cin,str);

    stringstream ss(str);
    string temp;
    vector<string>v;

    while(ss>>temp){

        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int max_count=1;
    int count=1;

    //to print the word which is presenting the most

    for(int i=1;i<v.size();i++){

        if(v[i]==v[i-1]){

            count++;
        }

        else{
            count=1;
        }

        max_count=max(count,max_count);
    }

    //the word which present the most
    count=1;
    for(int i=1;i<v.size();i++){

        if(v[i]==v[i-1]) count++;
        else count=1;

        if(count==max_count){

            cout<<"the word is => "<<v[i]<<" , "<<"most number of occurence of the word is : "<<max_count<<endl;
        }
    }


    return 0;
}