#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

bool checked(int n){
    return (n % 3 != 0 && n % 10 != 3);
}

void solve() {
    int n;
    cin >> n;

    int count = 0;
    int current = 1;

    while(true){
        if(checked(current)){
            count++;

            if(count == n){
                cout << current << endl; ;
                return;
            }
        }
        current++;
    }
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
