#include <bits/stdc++.h>

using namespace std;
const int MAXN = 6 * 1e5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int dis;
    cin >> dis;
    int n;
    cin >> n;
    vector<int> dp(6000, MAXN);
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        for (int j = a; j < 6000; j++) {
            if (dp[j - a] != MAXN) dp[j] = min(dp[j], dp[j - a] + 1);
        }
    }
    if (dp[dis] == MAXN)
        cout << "Roberta acknowledges defeat.";
    else
        cout << "Roberta wins in " << dp[dis] << " strokes.";

    return 0;
}
