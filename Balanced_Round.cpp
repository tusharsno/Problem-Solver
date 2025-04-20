#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n,k;
    cin >> n >> k;

    vector<int> numbers;

    for(int i = 0;i < n;i++){
        int a;
        cin >> a;

        numbers.push_back(a);
    }

    sort(numbers.begin(), numbers.end());

    int count = 1;
    int max_gap = 1;

    for(int j = 1;j < n;j++){
        if(numbers[j] - numbers[j-1] <= k){
            count++;        //1
        }else{
            //result = count; //1
            count = 1;
        }
        max_gap = max(max_gap, count);
    }

    cout << n - max_gap << endl;
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
