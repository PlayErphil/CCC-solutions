#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
    if (s == "ace" || s == "king" || s == "queen" || s == "jack")
        return true;
    else
        return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    vector<string> cards;
    vector<string> ans;
    for (int i = 0; i < 52; ++i) {
        cin >> s;
        cards.push_back(s);
    }
    int a = 0, b = 0;
    for (int i = 0; i < cards.size(); ++i) {
        int pts = 0;
        int player = i % 2;
        if (cards[i] == "ace")
            pts = 4;
        else if (cards[i] == "king")
            pts = 3;
        else if (cards[i] == "queen")
            pts = 2;
        else if (cards[i] == "jack")
            pts = 1;
        else
            continue;
        int cnt = pts;

        if (i + pts < cards.size()) {
            bool wins = true;
            while (cnt--) {
                if (check(cards[i + cnt + 1])) wins = false;
            }
            if (wins) {
                if (player == 0) {
                    a += pts;
                    ans.push_back("Player A scores " + to_string(pts) + " point(s).");
                } else {
                    b += pts;
                    ans.push_back("Player B scores " + to_string(pts) + " point(s).");
                }
            }
        }
    }
    for (auto item : ans) {
        cout << item << endl;
    }
    cout << "Player A: " << a << " point(s)." << endl;
    cout << "Player B: " << b << " point(s)." << endl;

    return 0;
}
