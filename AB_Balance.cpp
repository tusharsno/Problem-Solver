#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    for (int i = 0;i < t;i++){
        string s;
        cin >> s;

        //string sub_1 = "ab", sub_2 = "ba";
        int count_sub_1 = 0, count_sub_2 = 0;

        for (int j = 0;j < s.size() - 1;j++){
            if (s[j] == 'a' && s[j+1] == 'b'){
                count_sub_1++;
            }
            if(s[j] == 'b' && s[j+1] == 'a'){
                count_sub_2++;
            }
        }

        if (count_sub_1 == count_sub_2){
            cout << s << endl;
        } else {
            if (count_sub_1 > count_sub_2){
                s[0] = 'b';
            } else {
                s[0] = 'a';
            }
            cout << s << endl;
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
