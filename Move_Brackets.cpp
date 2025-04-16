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

    //size_t found = s.find("()");
    //cout << found << endl;

    //sort(s.begin(), s.end());
    //cout << s << endl;

    int first_b = 0,second_b = 0;

    if(s.size() == n){
        for(int i = 0;i < s.size();i++){
            if(s[i] == '('){
                for(int j = i+1;j < s.size();j++){
                    //if(s[i] == '('){
                        if(s[j] == ')'){
                            s.erase(j, 1);
                            s.erase(i, 1);
                            i = -1;
                            break;
                        }
                    //}
                }
            }
        }

        //cout << s << endl;
    }

    int count = 0;
    //if(s.size() == n){
        for(int i = 0;i < s.size();i++){
            if(s[i] == ')'){
                for(int j = i+1;j < s.size();j++){
                    //if(s[i] == '('){
                        if(s[j] == '('){
                            count++;
                            s.erase(j, 1);
                            s.erase(i, 1);
                            i = -1;
                            break;
                        }
                    //}
                }
            }
        }

        cout << count << endl;
    //}
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
