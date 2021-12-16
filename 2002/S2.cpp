#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;
    int x = n / d;
    if (x * d == n)
        cout << x << endl;
    else {
        int tmp = (n - x * d);
        for (int i = 2; i <= tmp; ++i) {
            while (tmp % i == 0 && d % i == 0) {
                tmp /= i;
                d /= i;
            }
        }
        if (x != 0) cout << x << " ";
        cout << tmp << "/" << d << endl;
    }

    return 0;
}