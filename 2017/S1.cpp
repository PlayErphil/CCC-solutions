#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int psa1[n + 1], psa2[n + 1];
    psa1[0] = psa2[0] = 0;
    for (int i = 0; i < n; ++i) {
        cin >> psa1[i + 1];
        psa1[i + 1] += psa1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> psa2[i + 1];
        psa2[i + 1] += psa2[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (psa1[i] == psa2[i]) ans = i;
    }
    cout << ans << endl;

    return 0;
}
