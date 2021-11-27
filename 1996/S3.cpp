#include <bits/stdc++.h>

using namespace std;

string pattern;
int n, k;

void fun(int start, int cnt) {
	for (int i = start; i < n; ++i) {
		pattern[i] = '1';
		cnt++;
		if (cnt == k) {
			cout << pattern << endl;
			
		} else {
			fun(i + 1, cnt);
		}
		pattern[i] = '0';
		cnt--;
	}
}


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--) {
		pattern = "";
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
			pattern += '0';
		}
		cout << "The bit patterns are" << endl;
		if (k == 0) cout << pattern << endl;
		else fun(0, 0);
		cout << endl;
		
	}
	
	
	return 0;
}