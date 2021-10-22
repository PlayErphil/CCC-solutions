#include <bits/stdc++.h>

using namespace std;


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int y, m, d;
		cin >> y >> m >> d;
		bool ans = false;
		if (y < 1989) ans = true;
		else if (y == 1989) {
			if (m == 1 || (m == 2 && d <= 27)) ans = true;
		}
		cout << ((ans) ? "Yes" : "No") << endl;
	}
	
	
	return 0;
}
