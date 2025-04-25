#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    for(int i = 0;i < t;i++){    //n = string length
        int n,a,b;               //a = substring length
        cin >> n >> a >> b;      //b = distinct letters

        string base_s = "abcdefghijklmnopqrstuvwxyz";

        string s = "";

        for(int i = 0;i < n;i++){
            s += base_s[i % b];
        }

        cout << s << endl;
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
