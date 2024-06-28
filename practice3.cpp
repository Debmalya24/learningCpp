#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    float sgpa1;
    cout<<"Enter the total marks of sgpa1 =  ";
    cin>>sgpa1;

    float sgpa2;
    cout<<"Enter the total marks of sgpa2 =  ";
    cin>>sgpa2;

    float sem1_total_marks=(sgpa1-0.5)*(1000)*0.1;

    cout<<"Sem1 total marks obtain = "<<sem1_total_marks<<endl;

    float sem2_total_marks=(sgpa2-0.5)*(800)*0.1;

    cout<<"Sem2 total marks obtain = "<<sem2_total_marks<<endl;



    float sem1_percentage=(sgpa1-0.5)*10;
    cout<<"The percentage of the sem1 is = "<<sem1_percentage<<endl;


    float sem2_percentage=(sgpa2-0.5)*10;
    cout<<"The percentage of the sem2 is = "<<sem2_percentage<<endl;


    float cgpa=(sgpa1+sgpa2)/2;
    cout<<"cgpa is = "<<cgpa<<endl;  //I have done it one the basis of how to calculate cgpa;


    float cumulative_percentage=(cgpa-0.5)*10;
    cout<<"the cumulative percentage is = "<<cumulative_percentage<<endl;

   

    return 0;
}