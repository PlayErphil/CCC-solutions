#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr;
    for (int i = 0; i < 4; ++i) {
        arr.push_back(i + 1);
    }
    string s;
    cin >> s;
    for (auto c : s) {
        if (c == 'H') {
            swap(arr[0], arr[2]);
            swap(arr[1], arr[3]);
        } else {
            swap(arr[0], arr[1]);
            swap(arr[2], arr[3]);
        }
    }
    cout << arr[0] << " " << arr[1] << endl
         << arr[2] << " " << arr[3] << endl;

    return 0;
}
