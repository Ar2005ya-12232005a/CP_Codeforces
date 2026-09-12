#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        int worm;
        cin >> worm;

        for(int j = 0; j < n; j++) {
            if(worm <= prefix[j]) {
                cout << j + 1 << endl;
                break;
            }
        }
    }

    return 0;
}