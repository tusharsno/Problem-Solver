#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

// dp[x] = max(dp[x-1], dp[x-2] + x * freq[x]);

// Base Case:
/* dp[0] = 0;
   dp[1] = freq[1] * 1; */

i_64 dp(i_64 max_num, map<i_64, i_64> freq){
    vector<i_64> dp(max_num + 1, 0);

    dp[0] = 0;
    dp[1] = 1 * freq[1];

    for(int j = 2;j <= max_num;j++){
        dp[j] = max(dp[j-1], dp[j-2] + j * freq[j]);
    }

    return dp[max_num];
}

void solve() {
    i_64 n;
    cin >> n;

    vector<i_64> numbers(n);
    map<i_64, i_64> freq;

    i_64 max_num = 0;

    for(int i = 0;i < n;i++){
        cin >> numbers[i];

        max_num = max(max_num, numbers[i]);
    }
    //cout << max_num << endl;

    for(int val : numbers){
        freq[val]++;
    }

    //vector<i_64> dp(max_num + 1, 0);

    //dp[0] = 0;
    //dp[1] = 1 * freq[1];

    //for(int j = 2;j <= max_num;j++){
        //dp[j] = max(dp[j-1], dp[j-2] + j * freq[j]);
    //}

    i_64 result = dp(max_num, freq);

    cout << result << endl;

    //for(auto pair : freq){
        //cout << pair.first << " " << pair.second << endl;
    //}
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
