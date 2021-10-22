#include <bits/stdc++.h>

using namespace std;
vector<set<char>> ts = {{'0'},
						{'1'},
						{'2', 'A', 'B', 'C'},
						{'D', 'E', 'F', '3'},
						{'G', 'H', 'I', '4'},
						{'J', 'K', 'L', '5'},
						{'6', 'M', 'N', 'O'},
						{'7', 'P', 'Q', 'R', 'S'},
						{'8', 'T', 'U', 'V'},
						{'9', 'W', 'X', 'Y', 'Z'}};


int test(char s) {
	for (int i = 0; i <= 9; ++i) {
		if (ts[i].find(s) != ts[i].end()) return i;
	}
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (auto item: s) {
			if (item == '-') continue;
			cout << test(item);
			cnt++;
			if (cnt == 3 || cnt == 6) cout << '-';
			if (cnt >= 10) break;
		}
		cout << endl;
	}
	
	return 0;
}