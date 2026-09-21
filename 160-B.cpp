#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.rbegin(), a.rend());

    int mine = 0;
    int count = 0;

    for (int x : a) {
        mine += x;
        total -= x;
        count++;

        if (mine > total) {
            cout << count << '\n';
            break;
        }
    }

    return 0;
}