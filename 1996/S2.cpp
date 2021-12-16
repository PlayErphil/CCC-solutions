#include <bits/stdc++.h>

using namespace std;
#define int long long
#define nl '\n'

void print(deque<int> &number) {
    while (number.front() == 0) number.pop_front();
    for (auto item : number) {
        cout << item;
    }
    cout << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        deque<int> number;
        for (auto item : s) {
            number.push_back(item - '0');
        }
        print(number);
        deque<int> initial = number;

        while (number.size() > 2) {
            int last = number.back();
            number.pop_back();
            if (last <= number.back()) {
                number.back() -= last;
            } else {
                number.back() = (number.back() - last) + 10;
                int cnt = number.size() - 2;
                while (number[cnt] == 0) {
                    number[cnt] = 9;
                    cnt--;
                }
                number[cnt]--;
            }
            print(number);
        }

        if (number.size() == 1) number.push_back(0);
        int tmp = number[0] * 10 + number[1];
        cout << "The number ";
        for (auto item : initial) {
            cout << item;
        }
        if (tmp % 11 == 0) {
            cout << " is divisible by 11." << nl;
        } else {
            cout << " is not divisible by 11." << nl;
        }
        if (t != 0) cout << endl;
    }

    return 0;
}