#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/

    int n, m, k;
    cin >> n >> m >> k;
    if (k < n) {
        cout << -1 << endl;
        return 0;
    }
    int goodSamples = n;
    int amount = n;
    int sz = 1;
    while (goodSamples < k) {
        amount--;
        if (amount == -1) {
            cout << -1 << endl;
            return 0;
        }
        sz++;
        goodSamples += amount;
    }
    if (sz > m) {
        cout << -1 << endl;
        return 0;
    }
    int tmp = 0;
    vector<int> arr;
    for (int i = 0; i < sz; i++) {
        arr.push_back(++tmp);
    }
    int current = goodSamples - amount + 1;
    tmp = 1;
    while (current != k) {
        arr.push_back(tmp);
        current++;
        tmp++;
        if (tmp > sz) tmp = 1;
    }
    while (arr.size() != n) {
        arr.push_back(arr[arr.size() - (sz - 1)]);
    }
    for (auto item : arr) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}