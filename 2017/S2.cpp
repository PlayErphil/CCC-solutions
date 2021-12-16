#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> arr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    deque<int> ans;
    if (n % 2 != 0) {
        ans.push_front(arr.front());
        arr.pop_front();
    }
    while (!arr.empty()) {
        ans.push_front(arr.back());
        arr.pop_back();
        ans.push_front(arr.front());
        arr.pop_front();
    }
    for (auto item : ans) {
        cout << item << " ";
    }

    return 0;
}