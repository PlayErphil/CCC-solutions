#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        deque<int> lake, branch;
        for (int i = n - 1; i >= 0; --i) {
            if (arr[i] == 1) {
                lake.push_back(arr[i]);
            } else {
                if (!lake.empty()) {
                    if (arr[i] == lake.back() + 1) {
                        lake.push_back(arr[i]);
                    } else {
                        branch.push_front(arr[i]);
                    }
                } else
                    branch.push_front(arr[i]);
            }
            while (!branch.empty() && !lake.empty()) {
                if (branch.front() == lake.back() + 1) {
                    lake.push_back(branch.front());
                    branch.pop_front();
                } else
                    break;
            }
        }
        if (branch.empty())
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
