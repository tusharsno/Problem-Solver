#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max_len = 0;
    int current = 1;

    vector<int> numbers;

    if (s.length() == n){
        for (int i = 0; i < n; i++){
            if (i == 0 || s[i] == s[i - 1]){
                current++;
            } else {
                current = 1;
            }
            max_len = max(max_len, current);
        }
        cout << max_len << endl;
    }
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
