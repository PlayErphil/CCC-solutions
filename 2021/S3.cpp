#include <bits/stdc++.h>

using namespace std;
#define int long long
#define double long double
const int maxn = 200003;
int n;
int pos[maxn];
int w[maxn];
int dis[maxn];

int cost(int x) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (x < pos[i] - dis[i]) sum += (pos[i] - dis[i] - x) * w[i];
        if (x > pos[i] + dis[i]) sum += (x - (pos[i] + dis[i])) * w[i];
    }
    return sum;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> pos[i] >> w[i] >> dis[i];
    }
    int lft = 0, rght = (int)1e9;
    while (lft < rght) {
        int mid = (lft + rght) / 2;
        if (cost(mid) < cost(mid + 1))
            rght = mid;
        else
            lft = mid + 1;
    }
    cout << cost(lft) << endl;

    return 0;
}