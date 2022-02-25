
#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> games;
int t, g;
int scores[5];
bool played[7];
int cnt;

void lastGames(int game) {
    // base case
    if (game == games.size()) {
        bool wins = true;
        for (int i = 1; i <= 4; ++i) {
            if (i != t) {
                if (scores[t] <= scores[i]) {
                    wins = false;
                }
            }
        }
        if (wins) {
            cnt++;
        }
        return;
    }
    // non-base case
    int a = games[game].first, b = games[game].second;
    // a wins
    scores[a] += 3;
    lastGames(game + 1);
    scores[a] -= 3;
    // b wins
    scores[b] += 3;
    lastGames(game + 1);
    scores[b] -= 3;
    // tie
    scores[a]++;
    scores[b]++;
    lastGames(game + 1);
    scores[a]--;
    scores[b]--;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/
    cin >> t >> g;
    int a, b, sa, sb;

    for (int i = 0; i < g; ++i) {
        cin >> a >> b >> sa >> sb;
        if (sa > sb) {
            scores[a] += 3;
        } else if (sa < sb) {
            scores[b] += 3;
        } else {
            scores[a]++;
            scores[b]++;
        }
        if (a == 1 && b == 2) {
            played[1] = true;
        } else if (a == 1 && b == 3) {
            played[2] = true;
        } else if (a == 1 && b == 4) {
            played[3] = true;
        } else if (a == 2 && b == 3) {
            played[4] = true;
        } else if (a == 2 && b == 4) {
            played[5] = true;
        } else if (a == 3 && b == 4) {
            played[6] = true;
        }
    }
    if (!played[1]) {
        games.push_back({1, 2});
    }
    if (!played[2]) {
        games.push_back({1, 3});
    }
    if (!played[3]) {
        games.push_back({1, 4});
    }
    if (!played[4]) {
        games.push_back({2, 3});
    }
    if (!played[5]) {
        games.push_back({2, 4});
    }
    if (!played[6]) {
        games.push_back({3, 4});
    }
    lastGames(0);
    cout << cnt << endl;
    return 0;
}