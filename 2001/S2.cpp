#include <bits/stdc++.h>

using namespace std;
vector<int> tmp(101, 0);
vector<vector<int>> spiral(101, tmp);
int a = 50, b = 50, x, y;
char moves = 'd';

void down() {
	a++;
	spiral[a][b] = x;
	moves = 'r';
}

void right() {
	b++;
	spiral[a][b] = x;
	moves = 'u';
}

void up() {
	a--;
	spiral[a][b] = x;
	moves = 'l';
}

void left() {
	b--;
	spiral[a][b] = x;
	moves = 'd';
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
	cin >> x >> y;
	spiral[a][b] = x;
	x++;
	while (x <= y) {
		if (moves == 'd') {
			if (spiral[a + 1][b] == 0) down();
			else left();
		} else if (moves == 'r') {
			if (spiral[a][b + 1] == 0) right();
			else down();
		} else if (moves == 'u') {
			if (spiral[a - 1][b] == 0) up();
			else right();
		} else if (moves == 'l') {
			if (spiral[a][b - 1] == 0) left();
			else up();
		}
		x++;
	}
	
	for (auto item: spiral) {
		bool tmpo = false;
		for (auto item2: item) {
			if (item2 != 0) {
				cout << item2 << " ";
				tmpo = true;
			}
		}
		if (tmpo) cout << "\n";
	}
	
	
	return 0;
}