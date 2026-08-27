#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    for (char &c : a)
        c = tolower(c);

    for (char &c : b)
        c = tolower(c);

    if (a < b)
        cout << -1 << endl;
    else if (a > b)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}