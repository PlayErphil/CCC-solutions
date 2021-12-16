#include <bits/stdc++.h>

using namespace std;

// DON'T DO THIS PROBLEM, I HATE IT AND SO WILL YOU

string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
                     "November", "December"};

bool checkDate(string s) {
    if (s[0] >= '0' && s[0] <= '2' && s[1] >= '0' && s[1] <= '9') {
        return true;
    }
    if (s[0] == '3' && (s[1] == '0' || s[1] == '1')) {
        return true;
    }
    return false;
}

bool checkMonth(string s) {
    if (s[0] == '0' && s[1] >= '0' && s[1] <= '9') {
        return true;
    }
    if (s[0] == '1' && s[1] >= '0' && s[1] <= '2') {
        return true;
    }
    return false;
}

bool checkYear(string s) {
    if (s[0] >= '0' && s[0] <= '9' && s[1] >= '0' && s[1] <= '9') {
        return true;
    }
    return false;
}

string modify(string s) {
    int n = (s[0] - '0') * 10 + (s[1] - '0');
    if (n <= 24) {
        return "20" + s;
    }
    return "19" + s;
}

bool isNumber(char s) {
    if (s >= '0' && s <= '9') {
        return true;
    }
    return false;
}

bool isLetter(char s) {
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')) {
        return true;
    }
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string s, date;
    getline(cin, s);
    while (t--) {
        getline(cin, s);
        for (int i = 0; i + 8 <= s.length(); i++) {
            if (i != 0 && s[i - 1] != ' ') continue;

            // dd/mm/yy
            if (s[i + 2] == '/' && s[i + 5] == '/' && checkDate(s.substr(i, 2)) && checkMonth(s.substr(i + 3, 2)) &&
                checkYear(s.substr(i + 6, 2))) {
                if (i + 8 != s.length() && (isNumber(s[i + 8]) || isLetter(s[i + 8]))) {
                    continue;
                }
                s = s.substr(0, i + 6) + modify(s.substr(i + 6, 2)) + s.substr(i + 8);
                continue;
            }
            // yy.mm.dd
            if (s[i + 2] == '.' && s[i + 5] == '.' && checkYear(s.substr(i, 2)) && checkMonth(s.substr(i + 3, 2)) &&
                checkDate(s.substr(i + 6, 2))) {
                if (i + 8 != s.length() && (isNumber(s[i + 8]) || isLetter(s[i + 8]))) {
                    continue;
                }
                s = s.substr(0, i) + modify(s.substr(i, 2)) + s.substr(i + 2);
                continue;
            }
            // Month, dd, yy

            for (auto month : months) {
                if (i > s.length() - (month.length() + 7)) {
                    continue;
                }
                if (s.substr(i, month.length()) == month) {
                    int pos = i + month.length();
                    if (s[pos] == ' ' && s[pos + 3] == ',' && s[pos + 4] == ' ' && checkDate(s.substr(pos + 1, 2)) &&
                        checkYear(s.substr(pos + 5, 2))) {
                        if (i != s.length() - (month.length() + 7) && (isNumber(s[pos + 7]) || isLetter(s[pos + 7]))) {
                            break;
                        }
                        s = s.substr(0, pos + 5) + modify(s.substr(pos + 5, 2)) + s.substr(pos + 7);
                    }
                    break;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
