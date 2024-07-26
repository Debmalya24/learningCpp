#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"enter the total number of elements in the array : ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements=> "<<endl;

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    int max_ele=*max_element(arr,arr+n);// in this case arr is a pointer which indicating arr[0] .and arr[0+5]=arr[5]; actually 
                                 
    vector<int>v(max_ele+1,0);

    bool flag=false;
    int count=0;

    for(int i=0;i<n;i++){

        if(arr[i] !=0){

            count=arr[i];
            v[count]++;

        }

        if(v[count]>1){

            flag=true;

            break;
        }
    }

    if(flag==true){

        cout<<"there is a duplicate"<<endl;
    }

    else{

        cout<<"there is no duplicate in the array.";
    }

    return 0;
}