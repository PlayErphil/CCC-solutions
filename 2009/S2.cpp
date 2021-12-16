#include <bits/stdc++.h>

using namespace std;
set<vector<int>> ans;
int r, c;

vector<int> fun(vector<vector<int>> &grid, int k) {
    for (int i = 1; i <= c; ++i) {
        if (grid[k][i] == grid[k + 1][i])
            grid[k][i] = 0;
        else
            grid[k][i] = 1;
    }
    if (k == 1)
        return grid[1];
    else
        return fun(grid, k - 1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> r >> c;
    vector<int> columns(c + 1, -1);
    vector<vector<int>> grid(r + 1, columns);
    for (int i = r; i > 0; --i) {
        for (int j = 1; j <= c; ++j) {
            cin >> grid[i][j];
        }
    }
    ans.insert(grid[1]);
    for (int i = 1; i < r; ++i) {
        vector<vector<int>> tmp;
        tmp = grid;
        ans.insert(fun(tmp, i));
    }
    cout << ans.size() << endl;

    return 0;
}
