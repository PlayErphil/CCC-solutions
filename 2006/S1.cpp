#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, c;
    cin >> s >> c;
    vector<set<char>> genes;
    for (int i = 0; i < 10; i += 2) {
        char l1 = s[i], l2 = s[i + 1], l3 = c[i], l4 = c[i + 1];
        set<char> tmp;
        tmp.insert(min(l1, l3));
        tmp.insert(min(l1, l4));
        tmp.insert(min(l2, l3));
        tmp.insert(min(l2, l4));
        genes.push_back(tmp);
    }
    int n;
    cin >> n;
    while (n--) {
        bool tmp = true;
        string baby;
        cin >> baby;
        for (int i = 0; i < 5; ++i) {
            if (genes[i].find(baby[i]) == genes[i].end()) tmp = false;
        }
        if (tmp) {
            cout << "Possible baby." << endl;
        } else
            cout << "Not their baby!" << endl;
    }

    return 0;
}
