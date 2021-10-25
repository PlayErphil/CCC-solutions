#include <bits/stdc++.h>

using namespace std;
int n;

bool check(vector<vector<int>> grid) {
	
	
	for (int i = 0; i < n; ++i) {
		int last1 = 0, last2 = 0;
		for (int j = 0; j < n; ++j) {
			if (grid[i][j] < last1) return false;
			else last1 = grid[i][j];
			if (grid[j][i] < last2) return false;
			else last2 = grid[j][i];
		}
	}
	return true;
}

void rotate(vector<vector<int>> &grid) {
	vector<vector<int>> tmp = grid;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			tmp[j][n - 1 - i] = grid[i][j];
		}
	}
	grid = tmp;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	vector<int> tmp(n);
	vector<vector<int>> grid(n, tmp);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> grid[i][j];
		}
	}
	while (!check(grid)) rotate(grid);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}