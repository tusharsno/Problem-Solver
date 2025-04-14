#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

/*int check(int x){
    int low = 0,high = 0,ans = 0;

    while(low <= high){
        int mid = (low + high) / 2;

        if(1LL * mid * mid <= x){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}*/


void solve() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for(int i = 0;i < n;i++) cin >> numbers[i];

    //int m;
    //cin >> m;

    //vector<int> numbers2;
    vector<int> arr;
    int sum = 0;

    for(int i = 0;i < n;i++){
        sum += numbers[i];
        arr.push_back(sum);
    }

    int m;
    cin >> m;

    vector<int> numbers2(m);

    for(int i = 0;i < m;i++) cin >> numbers2[i];

        //numbers2.push_back(q);

    //vector<int> new_numbers;

    for(int j = 0;j < m;j++){
        int q = numbers2[j];

        int idx = lower_bound(arr.begin(), arr.end(), q) - arr.begin();
        cout << idx + 1 << endl;
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
