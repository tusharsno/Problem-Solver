#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    //string s;
    //cin >> s;

    //int zeros = 0,ones = 0;

    for(int i = 0;i < t;i++){
        string s;
        cin >> s;

        int zeros = 0,ones = 0;

        for(int i = 0;i < s.size();i++){
            if(s[i] == '0') zeros++;
            else if(s[i] == '1') ones++;
        }

        int total_move = min(zeros, ones);

        cout << (total_move % 2 == 0 ? "NET\n" : "DA\n");
    }

    //int total_move = min(zeros, ones);

    //cout << (total_move % 2 == 0 ? "NET\n" : "DA\n");
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
