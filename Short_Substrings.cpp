#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    //set<char> words;

    for(int i = 0;i < t;i++){
        string b;
        cin >> b;

        string new_b = "";
        new_b += b[0];

        for(int j = 1;j < b.size();j += 2){
            new_b += b[j];
        }

        cout << new_b << endl;
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
