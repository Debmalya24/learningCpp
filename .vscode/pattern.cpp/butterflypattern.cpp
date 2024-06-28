#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

        int n;

        cout<<"Enter the rows : ";
        cin>>n;

        int m=n-1;

        int nsp=2*m-1;

        //star bridge reverse

        for(int i=1;i<=n-1;i++){

                for(int j=1;j<=i;j++){

                        cout<<"*";
                }

                for(int k=1;k<=nsp;k++){

                        cout<<" ";
                }

                nsp -=2;

                for(int q=1;q<=i;q++){

                        cout<<"*";
                }

                cout<<endl;
        }

        for(int i=1;i<=2*n-1;i++){

                cout<<"*";
        }
        cout<<endl;

        //star bridge

        for(int i=1;i<=2*n-1;i++){

                cout<<"*";
        }
        cout<<endl;

        int nsp1=1;

        for(int i=1;i<=n-1;i++){

                for(int j=1;j<=n-i;j++){

                        cout<<"*";
                }

                for(int k=1;k<=nsp1;k++){

                        cout<<" ";
                }

                nsp1 +=2;

                for(int j=1;j<=n-i;j++){

                        cout<<"*";
                }

                cout<<endl;


        }

     return 0;

}