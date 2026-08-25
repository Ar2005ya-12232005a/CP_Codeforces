#include <iostream>
using namespace std;

bool isLucky(int x) {
    while (x > 0) {
        int digit = x % 10;

        if (digit != 4 && digit != 7)
            return false;

        x /= 10;
    }

    return true;
}

int main() {
    long long n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit == 4 || digit == 7)
            count++;

        n /= 10;
    }

    if (isLucky(count))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}