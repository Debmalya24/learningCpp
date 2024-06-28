#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void subSet(vector<int>& v1, vector<int>& v2) {
    int n = v1.size();
    int m = v2.size();
    bool flag = true;

    int i = 0;
    int j = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (v2[i] == v1[j]) {
                flag = true;
                break;
            } else if (j == n - 1) {
                flag = false;
            }
        }
    }

    if (flag == true)
        cout << "There is a subset of array";
    else
        cout << "There is no subset of array";

    return;
}

int main() {
    int n1;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;

    vector<int> v1;

    for (int i = 0; i < n1; i++) {
        int ele;
        cin >> ele;
        v1.push_back(ele);
    }

    int n2;
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;

    vector<int> v2;

    for (int i = 0; i < n2; i++) {
        int ele;
        cin >> ele;
        v2.push_back(ele);
    }

    subSet(v1, v2);

    return 0;
}