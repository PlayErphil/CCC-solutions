#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n++;
    while (true) {
        string s = to_string(n);
        set<char> tmp;
        for (auto item : s) tmp.insert(item);
        if (tmp.size() == s.size())
            break;
        else
            n++;
    }
    cout << n << endl;

    return 0;
}