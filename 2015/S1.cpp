#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	deque<int> tmp;
	int k;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		int x;
		cin >> x;
		if (x == 0 && !tmp.empty()) tmp.pop_back();
		else tmp.push_back(x);
	}
	int cnt = 0;
	for (auto item: tmp) cnt += item;
	
	cout << cnt << endl;
	
	
	return 0;
}
