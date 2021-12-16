#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n--;  // biggest number always scores, so it's always there
    /* Answer is to choose 3 out of n-1
     * C (n, r) = n! / ( r!(n-r)! )
     * C (n, 3) = n! / 3!(n-3)!
     * n! / 3!(n-3)! = n * (n - 1) * (n - 2) / 6
     * C (n, 3) = n * (n - 1) * (n - 2) / 6
     */
    cout << (n * (n - 1) * (n - 2)) / 6 << endl;  //

    return 0;
}
