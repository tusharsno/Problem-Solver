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

    unordered_map<string, int> freq;

    for(int i = 0;i < n;i++){
        cin >> s;

        if(freq.find(s) == freq.end()){
            cout << "OK" << endl;
            freq[s] = 1;
        }else{
            cout << s << freq[s] << endl;
            freq[s]++;
        }
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
