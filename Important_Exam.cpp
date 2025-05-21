#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> answers(n);
    for (int i = 0; i < n; i++) {
        cin >> answers[i];
    }

    vector<int> points(m);
    for (int i = 0; i < m; i++) {
        cin >> points[i];
    }

    int total_score = 0;

    for (int j = 0; j < m; j++) {
        vector<int> freq(5, 0);

        for (int k = 0; k < n; k++) {
            char c = answers[k][j];
            freq[c - 'A']++;
        }

        int max_freq = *max_element(freq.begin(), freq.end());

        total_score += max_freq * points[j];
    }

    cout << total_score << endl;
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
