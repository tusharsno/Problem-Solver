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

    set<char> seen;
    char first_ch = s[0];
    seen.insert(first_ch);
    //string new_s = "";

    if(s.size() == n){
        for(int i = 1;i < s.size();i++){
            if(s[i] != first_ch){
                if(seen.count(s[i])){
                    cout << "NO\n";
                    return;
                }
                seen.insert(s[i]);
                first_ch = s[i];
                //s.erase(remove(s.begin(), s.end(), s[i]), s.end());
                //new_s += s[i-1];
            }else{
                //first_ch = s[i];
                //continue;
            }
        }

        //cout << new_s << endl;

        /*map<char, int> freq;

        for(char c : new_s){
            freq[c]++;
        }

        for(auto [ch, count] : freq){
            cout << (count > 1 ? "NO" : "YES") << endl;
            break;
        }*/
    }

    cout << "YES\n";
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
