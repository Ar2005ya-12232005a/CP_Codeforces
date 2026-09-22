#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> b(n, vector<int>(m));
    vector<vector<int>> a(n, vector<int>(m, 1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    // A zero in B forces the entire
    // corresponding row and column in A to zero.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i][j] == 0) {
                for (int k = 0; k < m; k++)
                    a[i][k] = 0;

                for (int k = 0; k < n; k++)
                    a[k][j] = 0;
            }
        }
    }

    // Verify the constructed matrix.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int value = 0;

            for (int k = 0; k < m; k++)
                value |= a[i][k];

            for (int k = 0; k < n; k++)
                value |= a[k][j];

            if (value != b[i][j]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}