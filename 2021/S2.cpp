#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int m, n, k;
	cin >> m >> n >> k;
	vector<bool> isRowBlack(m, true);
	vector<bool> isColBlack(n, true);
	for (int i = 0; i < k; ++i) {
		char entry;
		int number;
		cin >> entry >> number;
		number--;
		if (entry == 'R') {
			if (isRowBlack[number]) {
				isRowBlack[number] = false;
			} else {
				isRowBlack[number] = true;
			}
		} else {
			if (isColBlack[number]) {
				isColBlack[number] = false;
			} else {
				isColBlack[number] = true;
			}
		}
	}
	int goldR = 0;
	int goldC = 0;
	for (int i = 0; i < m; ++i) {
		if (!isRowBlack[i]) goldR++;
	}
	for (int i = 0; i < n; ++i) {
		if (!isColBlack[i]) goldC++;
	}
	cout << goldR * n + goldC * m - 2 * goldC * goldR << endl;
	
	return 0;
}
