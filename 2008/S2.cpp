#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int r;
	cin >> r;
	while (r != 0) {
		int ans = 0;
		for (int x = r; x > 0; --x) {
			int y = sqrt(r * r - x * x);
			ans += y + 1;
		}
		ans *= 4;
		cout << ans + 1 << endl;
		cin >> r;
	}
	
	return 0;
}