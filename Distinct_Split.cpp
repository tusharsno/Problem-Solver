#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

bool check_all_unique_chars (string str) {
    set<char> s;

    for (char c : str) {
        if (s.count(c)) return false;
        s.insert(c);
    }

    return true;
}

bool all_chars_same (string s) {
    char first = s[0];
    for (char c : s) {
        if (c != first) return false;
    }

    return true;
}


void solve() {
    i_64 n;
    cin >> n;

    string s;
    cin >> s;

    if (s.size() == n) {
        if (s.size() == 2) {
            cout << 2 << endl;
            return;
        }
        if (all_chars_same(s)) {
            cout << 2 << endl;
            return;
        }

        if (check_all_unique_chars(s)) {
            cout << s.size() << endl;
            return;
        }

        vector<int> prefix(n), suffix(n);
        unordered_set<char> seen;

        seen.clear();
        for (int i = 0; i < n; i++) {
            seen.insert(s[i]);
            prefix[i] = seen.size();
        }

        seen.clear();
        for (int i = n - 1; i >= 0; i--) {
            seen.insert(s[i]);
            suffix[i] = seen.size();
        }

        int max_sum = 0;
        for (int i = 0; i < n - 1; i++) {
            max_sum = max(max_sum, prefix[i] + suffix[i + 1]);
        }

        cout << max_sum << endl;
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
