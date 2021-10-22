#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string a, b;
	cin >> a >> b;
	map<char, int> cnt;
	for (auto item: a) {
		cnt[item]++;
	}
	for (auto item: b) {
		cnt[item]--;
	}
	int sum = 0;
	for (auto item: cnt) {
		if (item.first == '*')continue;
		if (item.second < 0) {
			cout << "N" << endl;
			return 0;
		}
		sum += item.second;
	}
	if (sum == abs(cnt['*'])) cout << "A" << endl;
	else cout << "N" << endl;
	
	return 0;
}