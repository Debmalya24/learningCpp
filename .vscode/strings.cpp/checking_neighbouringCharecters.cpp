#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"charecter in the strings : ";
    getline(cin,str);

    int n=str.size();

    int count=0;

    for(int i=0;i<n;i++){

        if(n==1){

            break;
        }

        else if(n==2 && str[i] !=str[i+1]){

            count=1;
            break;
        }

        else if(i==0){

            if(str[i] !=str[i+1]){

                count++;
            }
        }

        else if(str[i]!=str[i-1] && str[i] !=str[i+1]){

            count++;
        }

        else if(i==n-1){

            if(str[i]!=str[i-1]){

                count++;
            }
        }

       
    }

    cout<<"total count will be => "<<count<<endl;

    return 0;
}

