#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n--) {
        getline(cin, s);
        string tmp = "";
        for (auto item : s) {
            if (item == ' ') {
                if (tmp.length() == 4)
                    cout << "**** ";
                else
                    cout << tmp + ' ';
                tmp = "";
            } else
                tmp += item;
        }
        if (tmp != "") {
            if (tmp.length() == 4)
                cout << "****";
            else
                cout << tmp;
        }
        cout << endl;
    }

    return 0;
}