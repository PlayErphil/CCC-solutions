
#include <bits/stdc++.h>

using namespace std;

bool cristal(int m, int x, int y) {
    if (m == 0) {
        if (y == 1 && x >= 2 && x <= 4) {
            return true;
        } else if (y == 2 && x == 3) {
            return true;
        } else {
            return false;
        }
    }
    int mag = pow(5, m);
    if (x > 1 * mag && x <= 2 * mag && y > 1 * mag && y <= 2 * mag) {
        return cristal(m - 1, x - (1 * mag), y - (1 * mag));
    }
    if (x > 2 * mag && x <= 3 * mag && y > 2 * mag && y <= 3 * mag) {
        return cristal(m - 1, x - (2 * mag), y - (2 * mag));
    }
    if (x > 3 * mag && x <= 4 * mag && y > 1 * mag && y <= 2 * mag) {
        return cristal(m - 1, x - (3 * mag), y - (1 * mag));
    }
    x = x / 5 + (x % mag != 0);
    y = y / 5 + (y % mag != 0);
    return cristal(m - 1, x, y);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/
    int t;
    cin >> t;
    vector<bool> ans;
    while (t--) {
        int m, x, y;
        cin >> m >> x >> y;
        ans.push_back(cristal(m - 1, x + 1, y + 1));
    }
    for (int i = 0; i < ans.size(); ++i) {
        if (ans[i]) {
            cout << "crystal" << endl;
        } else {
            cout << "empty" << endl;
        }
    }
    return 0;
}