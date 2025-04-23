#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int k;
    cin >> k;

    vector<int> centimeters;

    for(int i = 0;i < 12;i++){
        int a;
        cin >> a;

        centimeters.push_back(a);
    }

    sort(centimeters.begin(), centimeters.end());

    //int target = 0;
    //while(taget >= 0){
        //target +=
    //}

    int target = 0;
    int count = 0;
    int total_sum = 0;
    int print = 0;

    for(int j = 0;j < centimeters.size();j++){
        target += centimeters[centimeters.size() - j - 1];
        count++;

        total_sum += centimeters[j];

        if(k == 0){
            cout << "0\n";
            print++;
            break;
        } else if(target >= k){
            cout << count << endl;
            print++;
            break;
        }
    }

    //cout << total_sum << endl;
    if(print == 0 && total_sum < k) cout << "-1\n";
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
