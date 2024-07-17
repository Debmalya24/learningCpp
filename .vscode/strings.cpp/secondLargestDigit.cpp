#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
#include <limits.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    getline(cin,str);

    char max='!';
    char s_max='!';

    bool found_s_max=false;

    // if the input string does not contain digits from 0 to 9 ,it will show an error;

    for(int i=0;i<str.size();i++){
        if(!isdigit(str[i])){

            cout<<"invalid input !! please enter a string from 0 to 9.";
            return 1;
        }
    }
    
 // if the digit is of one size then there will be no second largest digit;
    if(str.size()<2){
        cout << "There is no second largest element in the string." << endl;
        return 0;
    }

    for(int i=0;i<str.size();i++){

        if(str[i]>max){

            s_max=max;
            max=str[i];
             found_s_max=true;
        }

        else if(str[i]>s_max &&str[i]<max){

            s_max=str[i];
            found_s_max=true;
        }
    }

   if(  found_s_max==true){
    cout<<"the second largest element will be => "<<s_max<<endl;
   }
   else{

    cout<<"there is no  second largest element ;"<<endl;
   }

    return 0;
}