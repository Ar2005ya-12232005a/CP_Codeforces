#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26] = {};

    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0)
            odd++;
    }

    if (odd <= 1 || odd % 2 == 1)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}