#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 1) {
            // Odd row: all #
            for (int j = 0; j < m; j++) {
                cout << '#';
            }
        }
        else if (i % 4 == 0) {
            // Every 4th row: # at the beginning
            cout << '#';

            for (int j = 1; j < m; j++) {
                cout << '.';
            }
        }
        else {
            // Other even rows: # at the end
            for (int j = 0; j < m - 1; j++) {
                cout << '.';
            }

            cout << '#';
        }

        cout << '\n';
    }

    return 0;
}