#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int x, y, z;
    cin >> x >> y >> z;
    int cnt = 0;
    while (n > 0) {
        n--;
        x++;
        if (x % 35 == 0 && x > 0 && n >= 0) n += 30;
        if (n >= 0) cnt++;
        n--;
        y++;
        if (y % 100 == 0 && y > 0 && n >= 0) n += 60;
        if (n >= 0) cnt++;
        n--;
        z++;
        if (z % 10 == 0 && z > 0 && n >= 0) n += 9;
        if (n >= 0) cnt++;
    }
    cout << "Martha plays " << cnt << " times before going broke."
         << "\n";

    return 0;
}