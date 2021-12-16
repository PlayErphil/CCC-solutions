#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e8;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int dis, n;
    cin >> dis >> n;
    vector<int> dp(6000, MAXN);
    dp[0] = 0;
    while (n--) {
        int a;
        cin >> a;
        for (int i = a; i < 6000; i++) {
            if (dp[i - a] != MAXN) dp[i] = min(dp[i], dp[i - a] + 1);
        }
    }
    if (dp[dis] != MAXN)
        cout << "Roberta wins in " << dp[dis] << " strokes.\n";
    else
        cout << "Roberta acknowledges defeat.\n";

    return 0;
}
