#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n,m;
    cin >> n >> m;

    vector<int> total_tv_p;

    for(int i = 0;i < n;i++){
        int a;
        cin >> a;

        total_tv_p.push_back(a);
    }

    sort(total_tv_p.begin(), total_tv_p.end());

    //for(int el : total_tv_p) cout << el << " ";
    //cout << endl;

    int sum = 0;

    for(int j = 0;j < m;j++){
        if(total_tv_p[j] < 0) sum += total_tv_p[j];
    }
    cout << abs(sum) << endl;
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
