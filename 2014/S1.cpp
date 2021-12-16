#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < k; ++i) {
        arr.push_back(i + 1);
    }
    int m;
    cin >> m;
    while (m--) {
        int r;
        cin >> r;
        vector<int> newArr;
        for (int i = 0; i < arr.size(); ++i) {
            if ((i + 1) % r == 0)
                continue;
            else
                newArr.push_back(arr[i]);
        }
        arr = newArr;
    }
    for (auto item : arr) {
        cout << item << endl;
    }

    return 0;
}
