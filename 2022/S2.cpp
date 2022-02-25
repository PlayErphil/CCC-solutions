#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/

    int x, y;
    cin >> x;
    vector<pair<string, string>> sameG, difG;

    for (int i = 0; i < x; i++) {
        string a, b;
        cin >> a >> b;
        sameG.push_back({a, b});
    }
    cin >> y;
    for (int i = 0; i < y; i++) {
        string a, b;
        cin >> a >> b;
        difG.push_back({a, b});
    }
    int g;
    cin >> g;
    int cnt = 0;
    map<string, set<string>> together;
    for (int i = 0; i < g; i++) {
        string names[3];
        cin >> names[0] >> names[1] >> names[2];
        sort(names, names + 3);

        together[names[0]].insert(names[1]);
        together[names[0]].insert(names[2]);
        together[names[1]].insert(names[2]);
    }
    for (auto item : sameG) {
        string a = item.first, b = item.second;
        if (a > b) swap(a, b);
        if (together[a].find(b) == together[a].end()) {
            // you can't find it
            cnt++;
        }
    }
    for (auto item : difG) {
        string a = item.first, b = item.second;
        if (a > b) swap(a, b);
        if (together[a].find(b) != together[a].end()) {
            // you can find it
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}