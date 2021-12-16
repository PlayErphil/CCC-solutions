#include <bits/stdc++.h>

using namespace std;

bool fix(string x, string y) {
    if (y.length() > x.length()) swap(x, y);
    if (x.substr(0, y.length()) != y && x.substr(x.length() - y.length(), y.length()) != y) return true;
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string x, y, z;
        cin >> x >> y >> z;
        if (fix(x, y) && fix(y, z) && fix(x, z))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
