#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	int pos = 1;
	while (n != 0) {
		pos += n;
		switch (pos) {
			case 54:
				pos = 19;
				break;
			case 90:
				pos = 48;
				break;
			case 99:
				pos = 77;
				break;
			case 9:
				pos = 34;
				break;
			case 40:
				pos = 64;
				break;
			case 67:
				pos = 86;
				break;
			case 100:
				cout << "You are now on square " << pos << endl;
				cout << "You Win!" << endl;
				return 0;
		}
		if (pos > 100) pos -= n;
		cout << "You are now on square " << pos << endl;
		cin >> n;
	}
	cout << "You Quit!\n";
	return 0;
}
