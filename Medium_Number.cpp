#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    vector<int> numbers;

    for(int i = 0;i < t;i++){
        int a, b, c;
        cin >> a >> b >> c;

        numbers.push_back(a);
        numbers.push_back(b);
        numbers.push_back(c);

        sort(numbers.begin(), numbers.end());

        cout << numbers[1] << endl;

        numbers.clear();
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
