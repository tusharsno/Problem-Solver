#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    vector<int> income;

    for(int i = 0;i < n;i++){
        int a;
        cin >> a;

        income.push_back(a);
    }

    int max_income = *max_element(income.begin(), income.end());

    int result = 0;

    for(int j = 0;j < income.size();j++){
        result += max_income - income[j];
    }
    cout << result << endl;
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
