#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int total = 0;

    for(int i = 0; i < n; i++) {
        total += coins[i];
    }

    int mine = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        mine += coins[i];
        count++;

        if(mine > total - mine) {
            break;
        }
    }

    cout << count;

    return 0;
}