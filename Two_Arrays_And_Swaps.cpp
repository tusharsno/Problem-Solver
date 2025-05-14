#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

int sum_calculate (vector<int> arr) {
    int sum = 0;
    for (int num : arr) sum += num;

    return sum;
}


void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> arr_a(n);
    vector<int> arr_b(n);

    for (int i = 0; i < n; i++) cin >> arr_a[i];
    sort(arr_a.begin(), arr_a.end());

    for (int i = 0; i < n; i++) cin >> arr_b[i];
    sort(arr_b.rbegin(), arr_b.rend());

    //vector<int> final_arr;

    for (int j = 0; j < k; j++) {
        if (arr_a[j] < arr_b[j]) swap(arr_a[j], arr_b[j]);
        else break;
        //int max_el = max(arr_a[j], arr_b[j]);

        //final_arr.push_back(max_el);
    }

    //for (int num : final_arr) cout << num <<  " ";
    //cout << endl;

    int final_sum = sum_calculate(arr_a);
    cout << final_sum << endl;
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
