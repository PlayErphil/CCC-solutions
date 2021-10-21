#include <bits/stdc++.h>

using namespace std;

int p, g, r, o, cost;

int sum(int i, int j, int k, int l) {
	return i * p + j * g + k * r + l * o;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> p >> g >> r >> o >> cost;
	int cnt = 0;
	int minimum = 1e8;
	for (int i = 0; sum(i, 0, 0, 0) <= cost; ++i) {
		for (int j = 0; sum(i, j, 0, 0) <= cost; ++j) {
			for (int k = 0; sum(i, j, k, 0) <= cost; ++k) {
				for (int l = 0; sum(i, j, k, l) <= cost; ++l) {
					if (cost == sum(i, j, k, l)) {
						minimum = min(minimum, i + j + k + l);
						cnt++;
						cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k
							 << " # of ORANGE is " << l << "\n";
					}
				}
			}
		}
	}
	cout << "Total combinations is " << cnt << ".\n";
	cout << "Minimum number of tickets to print is " << minimum << ".\n";
	
	return 0;
}