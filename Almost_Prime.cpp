#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

/* bool isPrime(int x) {
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
} */

int countDistPrimeFact(int x) {
    int count = 0;

    for (int i = 2; i <= x; i++) {
        if (x % i == 0) {
            bool is_prime = true;

            for (int j = 2; j * j <= i; j++) {
                if (i * j == 0) {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime) {
                count++;

                while (x % i == 0) {
                    x /= i;
                }
            }
        }
    }

    return count;
}

/* int countPrime(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) count++;
    }

    return count;
} */


void solve() {
    int n;
    cin >> n;

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (countDistPrimeFact(i) == 2) {
            result++;
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while (t--) {
        solve();
    // }

    return 0;
}



