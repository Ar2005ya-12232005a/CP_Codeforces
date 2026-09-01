#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }

        if (arr[i] <= arr[minIndex]) {
            minIndex = i;
        }
    }

    int moves = maxIndex;

    // After moving maximum to the front,
    // minimum's index may shift right by 1.
    if (minIndex < maxIndex) {
        minIndex++;
    }

    moves += (n - 1 - minIndex);

    cout << moves;

    return 0;
}