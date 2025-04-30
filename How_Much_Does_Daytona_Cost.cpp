#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> numbers;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        numbers.push_back(a);
    }

    for(int num : numbers){
        if(num == k){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
