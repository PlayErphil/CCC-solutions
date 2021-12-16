#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, r;
    cin >> c >> r;
    int a, b;
    cin >> a >> b;
    int posx = 0, posy = 0;
    while (!(a == 0 && b == 0)) {
        posx += a;
        posy += b;
        if (posx < 0) posx = 0;
        if (posx > c) posx = c;
        if (posy < 0) posy = 0;
        if (posy > r) posy = r;
        cout << posx << ' ' << posy << endl;
        cin >> a >> b;
    }

    return 0;
}