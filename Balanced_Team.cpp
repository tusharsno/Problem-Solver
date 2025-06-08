#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

/*bool two_pointer_tech(vector<ll>& skills, int target) {
    ll l = 0, r = skills.size() - 1;

    while (l < r) {
        ll sum = skills[l] + skills[r];

        if (sum == target)
            return true;
        else if (sum < target)
            l++;
        else
            r--;
    }

    return false;
}*/


void solve() {
    ll n; cin >> n;
    //int target = 5;

    vector<ll> skills(n);
    for (ll i = 0; i < n; i++) cin >> skills[i];

    sort(skills.begin(), skills.end());

    ll count = 1;
    ll l = 0;

    for (ll j = 0; j < n; j++) {
        while (skills[j] - skills[l] > 5)
            l++;

        count = max(count, j - l + 1);
    }

    cout << count << endl;

    //cout << (two_pointer_tech(skills, target) ? "YES\n" : "NO\n");
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
