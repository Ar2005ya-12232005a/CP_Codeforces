#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int home[100];
    int away[100];

    for (int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home[i] == away[j]) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}