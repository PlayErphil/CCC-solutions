#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int j, a;
    cin >> j >> a;
    char arr[j];
    for (int i = 0; i < j; ++i) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < a; ++i) {
        char sz;
        int n;
        cin >> sz >> n;
        n--;
        if (arr[n] <= sz) {
            ans++;
            arr[n] = 'Z';
        }
    }
    cout << ans << endl;

    return 0;
}