#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> ans;
    for (int n = 1000; n <= 9999; ++n) {
        int sum = 1;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                sum += i;
                if (i * i != n) sum += n / i;
            }
            if (sum > n) break;
        }
        if (sum == n) ans.push_back(n);
    }
    ans.push_back(-1);
    for (int i = 100; i <= 999; ++i) {
        int c = i;
        int a = i / 100;
        c -= (a * 100);
        int b = c / 10;
        c -= (b * 10);
        if (a * a * a + b * b * b + c * c * c == i) ans.push_back(i);
    }
    for (auto item : ans) {
        if (item == -1) {
            cout << endl;
            continue;
        }
        cout << item << " ";
    }
    cout << endl;

    return 0;
}