#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2)
        return false;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        long long root = sqrtl(x);

        // Correct possible floating-point error
        while ((root + 1) * (root + 1) <= x)
            root++;

        while (root * root > x)
            root--;

        if (root * root == x && isPrime(root))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}