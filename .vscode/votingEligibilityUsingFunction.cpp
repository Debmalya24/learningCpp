#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkEligibility(int age,int limit){

    if(age>=limit){

        return true;
    }
    else{

        return false;
    }
}

int main(){

    int voting_eligibility=18;
    int current_age;
    cin>>current_age;

    int is_eligible_for_voting=checkEligibility(current_age,voting_eligibility);

    if(is_eligible_for_voting){

        cout<<"Yes, the person is Eligible for voting";
    }
    else{

        cout<<"No,the person is not eligible for voting";
    }

    return 0;

}