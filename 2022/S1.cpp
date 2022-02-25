#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /** My Solution **/

    int n;
    cin >> n;
    int cnt = (n % 4 == 0);
    while (n > 0) {
        if (n % 5 == 0) cnt++;
        n -= 4;
    }
    cout << cnt << endl;

    return 0;
}