#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    for(int i = 0;i < t;i++){
        int n;
        cin >> n;

        //int target1 = 2021,target2 = 2020;
        //int result1 = 0,result2 = 0,result3 = 0;
        int x = 0;
        while(x * 2020 <= n){
            int rem = n - x * 2020;

            if(rem % 2021 == 0){
                cout << "YES\n";
                goto next_case;
            }
            x++;
        }
        cout << "NO\n";
        next_case:;
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
