#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double maxGap = 0;

    for(int i = 1; i < n; i++) {
        maxGap = max(maxGap, (double)(arr[i] - arr[i - 1]));
    }

    double leftGap = arr[0];
    double rightGap = l - arr[n - 1];

    double answer = max(maxGap / 2.0, max(leftGap, rightGap));

    cout << fixed << setprecision(10) << answer;

    return 0;
}