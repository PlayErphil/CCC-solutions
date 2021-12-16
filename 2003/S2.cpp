#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n--) {
        vector<string> ends(4);
        for (int i = 0; i < 4; ++i) {
            getline(cin, s);
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            reverse(s.begin(), s.end());
            for (auto item : s) {
                if (item == 'a' || item == 'e' || item == 'i' || item == 'o' || item == 'u' || item == ' ') {
                    if (item != ' ') ends[i].push_back(item);
                    break;
                } else
                    ends[i].push_back(item);
            }
        }
        if (ends[0] == ends[1] && ends[0] == ends[2] && ends[0] == ends[3])
            cout << "perfect";
        else if (ends[0] == ends[1] && ends[2] == ends[3])
            cout << "even";
        else if (ends[0] == ends[2] && ends[1] == ends[3])
            cout << "cross";
        else if (ends[1] == ends[2] && ends[0] == ends[3])
            cout << "shell";
        else
            cout << "free";
        cout << endl;
    }

    return 0;
}