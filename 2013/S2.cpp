#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, n;
    cin >> w >> n;
    deque<int> cars;
    int ans = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += x;
        cars.push_back(x);
        if (cars.size() > 4) {
            sum -= cars.front();
            cars.pop_front();
        }
        if (sum > w)
            break;
        else
            ans++;
    }
    cout << ans << endl;

    return 0;
}