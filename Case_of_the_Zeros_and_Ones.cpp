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

    int zeros = 0,ones = 0;

    if(s.size() == n){
        for(int i = 0;i < n;i++){
            if(s[i] == '0') zeros++;
            else if(s[i] == '1') ones++;
        }

        int minimum = min(zeros, ones);

        int result = s.size() - (minimum * 2);
        cout << result << endl;
    }
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
