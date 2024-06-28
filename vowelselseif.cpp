#include<iostream>
using namespace std;

int main(){
    char charector;
    cin>>charector;

        if((charector='a')||(charector='e')||(charector='i')||(charector='o')||(charector='u')){
            cout<<"Vowels"<<endl;
        }

        else{
            cout<<"Continious"<<endl;
        }

        return 0;
}