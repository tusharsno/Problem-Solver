#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> words;

    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s2.length() < s1.length()) {
            words[s1] = s2;
        } else {
            words[s1] = s1;
        }
    }

    for (int j = 0; j < n; j++) {
        string word;
        cin >> word;

        cout << words[word] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;
    //cin >> t;

    //while (t--) {
        solve();
    //}

    return 0;
}
