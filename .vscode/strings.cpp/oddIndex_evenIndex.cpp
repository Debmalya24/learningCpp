#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str="debmalya";
    int n=str.size();
    string s="";
    string odd_numbers="";
    string even_numbers="";
    

    for(int i=0;i<n;i++){;


        if(i%2 !=0){
           odd_numbers+=str[i];

        }
        else{
            even_numbers+=str[i];
        }
    }

    string final_string=odd_numbers+even_numbers;

    cout<<final_string;

}