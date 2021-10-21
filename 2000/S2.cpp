#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<double> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int input;
	cin >> input;
	while (input != 77) {
		if (input == 99) {
			int pos, percent;
			cin >> pos >> percent;
			arr.insert(arr.begin() + pos, ((1 - percent / 100.0) * arr[pos - 1]));
			arr[pos - 1] *= percent / 100.0;
		} else {
			int pos;
			cin >> pos;
			arr[pos] += arr[pos - 1];
			arr.erase(arr.begin() + (pos - 1));
		}
		cin >> input;
	}
	for (int item: arr) {
		cout << item << " ";
	}
	
	
	return 0;
}
