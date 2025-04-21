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

    if(s.size() == n){
        unordered_map<string, int> freq;

        for(int i = 0;i < s.size()-1;i++){
            string sub = s.substr(i, 2);
            freq[sub]++;
        }

        string most_freq = "";
        int count = 0;

        for(auto& c : freq){
            if(c.second > count){
                count = c.second;
                most_freq = c.first;
            }
        }
        cout << most_freq << endl;
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
