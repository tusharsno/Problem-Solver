#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int a,b,c;
    cin >> a >> b >> c;

    vector<int> numbers = {a, b, c};
    sort(numbers.begin(), numbers.end());

    cout << (numbers[1] + numbers[2] >= 10 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
