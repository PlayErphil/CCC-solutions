#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;
	set<int> arr;
	for (int i = 1; i * i * i <= b; ++i) {
		arr.insert(i * i * i);
	}
	int cnt = 0;
	for (int i = 1; i * i <= b; ++i) {
		if (arr.find(i * i) != arr.end() && i * i >= a) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}
