#include <bits/stdc++.h>

using namespace std;
#define all(x) x.begin(), x.end()
const int MM = 1e10 + 7;

bool works(vector<int> perm, vector<int> test) {
    do {
        if (test[0] <= perm[0] && test[1] <= perm[1] && test[2] <= perm[2]) return true;
    } while (next_permutation(all(perm)));
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> boxes;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        boxes.push_back({a, b, c});
        sort(all(boxes[i]));
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = MM;
        vector<int> tmp = {a, b, c};
        bool fits = false;
        for (auto item : boxes) {
            if (works(item, tmp)) {
                ans = min(ans, item[0] * item[1] * item[2]);
                fits = true;
            }
        }
        if (fits)
            cout << ans << endl;
        else
            cout << "Item does not fit." << endl;
    }

    return 0;
}