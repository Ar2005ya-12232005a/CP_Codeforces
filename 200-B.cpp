#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    double x;

    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    double average = sum / n;

    cout << average;

    return 0;
}