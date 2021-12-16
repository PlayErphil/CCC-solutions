#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<pair<int, int>> pairs;
    int sum = 0;
    for (int i = 0; i < s.size(); i += 2) {
        int r;
        switch (s[i + 1]) {
            case 'I':
                r = 1;
                break;
            case 'V':
                r = 5;
                break;
            case 'X':
                r = 10;
                break;
            case 'L':
                r = 50;
                break;
            case 'C':
                r = 100;
                break;
            case 'D':
                r = 500;
                break;
            case 'M':
                r = 1000;
                break;
        }
        int a = s[i] - '0';
        pairs.emplace_back(a * r, r);
        sum += a * r;
    }
    for (int i = 0; i < pairs.size() - 1; ++i) {
        if (pairs[i + 1].second > pairs[i].second) sum -= 2 * pairs[i].first;
    }
    cout << sum << endl;

    return 0;
}
