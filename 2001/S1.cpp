#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string entry;
    cin >> entry;
    vector<char> tmp;
    vector<vector<char>> suits(4, tmp);  // c,d,h,s
    int cur;
    for (auto letter : entry) {
        if (letter == 'C')
            cur = 0;
        else if (letter == 'D')
            cur = 1;
        else if (letter == 'H')
            cur = 2;
        else if (letter == 'S')
            cur = 3;
        else
            suits[cur].push_back(letter);
    }
    int sum = 0;
    vector<int> points;
    for (auto suit : suits) {
        int cnt = 0;
        if (suit.size() == 0)
            cnt += 3;
        else if (suit.size() == 1)
            cnt += 2;
        else if (suit.size() == 2)
            cnt += 1;
        for (auto card : suit) {
            if (card == 'A')
                cnt += 4;
            else if (card == 'K')
                cnt += 3;
            else if (card == 'Q')
                cnt += 2;
            else if (card == 'J')
                cnt += 1;
        }
        points.push_back(cnt);
        sum += cnt;
    }
    cout << "Cards Dealt Points" << nl;
    cout << "Clubs ";
    for (auto item : suits[0]) cout << item << " ";
    cout << points[0] << nl;
    cout << "Diamonds ";
    for (auto item : suits[1]) cout << item << " ";
    cout << points[1] << nl;
    cout << "Hearts ";
    for (auto item : suits[2]) cout << item << " ";
    cout << points[2] << nl;
    cout << "Spades ";
    for (auto item : suits[3]) cout << item << " ";
    cout << points[3] << nl;
    cout << "Total " << sum << nl;

    return 0;
}
