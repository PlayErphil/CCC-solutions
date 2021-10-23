#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, k;
	cin >> n >> k;
	int rank[n], worst[n], score[n];
	for (int i = 0; i < n; ++i) {
		rank[i] = worst[i] = 1;
		score[i] = 0;
	}
	for (int i = 0; i < k; ++i) {
		for (int j = 0; j < n; ++j) {
			int x;
			cin >> x;
			score[j] += x;
		}
		for (int j = 0; j < n; ++j) {
			int tmp = 1;
			for (int l = 0; l < n; ++l) {
				if (score[l] > score[j]) tmp++;
			}
			rank[j] = tmp;
			worst[j] = max(worst[j], rank[j]);
		}
	}
	for (int i = 0; i < n; ++i) {
		if (rank[i] == 1) {
			cout << "Yodeller " << i + 1 << " is the TopYodeller: score " << score[i] << ", worst rank " << worst[i]
				 << endl;
		}
	}
	
	return 0;
}