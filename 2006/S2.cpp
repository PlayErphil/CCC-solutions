#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, c1, c2;
    getline(cin, s);
    getline(cin, c1);
    getline(cin, c2);
    map<char, char> letterMapping;
    for (int i = 0; i < s.size(); ++i) {
        letterMapping[c1[i]] = s[i];
    }
    for (int i = 0; i < c2.size(); ++i) {
        if (letterMapping.find(c2[i]) != letterMapping.end()) {
            cout << letterMapping[c2[i]];
        } else
            cout << ".";
    }
    cout << endl;

    return 0;
}