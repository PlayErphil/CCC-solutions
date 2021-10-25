#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		int sum = 1;
		for (int j = 2; j * j <= x; ++j) {
			if (x % j == 0) {
				sum += j;
				if (j * j != x) sum += x / j;
			}
		}
		if (sum > x) cout << x << " is an abundant number." << endl;
		else if (sum < x)cout << x << " is a deficient number." << endl;
		else cout << x << " is a perfect number." << endl;
	}
	
	
	return 0;
}