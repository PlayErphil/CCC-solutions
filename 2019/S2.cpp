#include <bits/stdc++.h>

using namespace std;
const int MAXN = 2 * 1e6 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> primes;
    vector<bool> isPrime(MAXN, true);
    for (int i = 2; i < MAXN; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n *= 2;
        for (auto prime : primes) {
            int prime2 = n - prime;
            if (isPrime[prime2]) {
                cout << prime << " " << prime2 << '\n';
                break;
            }
        }
    }

    return 0;
}