#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int k;
	cin >> k;
	map<string, string> letter;
	for (int i = 0; i < k; ++i) {
		string s, l;
		cin >> s >> l;
		letter[l] = s;
	}
	string s;
	cin >> s;
	string tmp = "";
	for (auto item: s) {
		tmp += item;
		if (letter.find(tmp) != letter.end()) {
			cout << letter[tmp];
			tmp = "";
		}
	}
	cout << endl;
	
	return 0;
}
