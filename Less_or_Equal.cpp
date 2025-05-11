#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, k;
    cin >> n >> k;

    vector<i_64> numbers(n);
    //map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];

        //freq++;
    }

    sort(numbers.begin(), numbers.end());
    //[1, 3, 3, 5, 7, 10, 20]

    //i_64 x = numbers[k - 1];

    //vector<i_64> new_numbers;

    /*for (int j = 0; j < n; j++) {
        if (j == k-1) {
            new_numbers.push_back(numbers[j]);
            break;
        }
        else
            new_numbers.push_back(numbers[j]);
    }*/

    //cout << ((k < n && numbers[k] == x) ? -1 : x) << endl;

    if (k == 0) {
        cout << (numbers[0] > 1 ? 1 : -1) << endl;
        return;
    }

    i_64 x = numbers[k - 1];

    cout << ((k < n && numbers[k] == x) ? -1 : x) << endl;

    //cout << new_numbers.size() << endl;
    //cout << endl;
    //cout << "k element: " << numbers[k - 1] << endl;

    /*if (new_numbers.size() >= numbers[k-1])
        cout << new_numbers.size() + 1 << endl;
    else
        cout << -1 << endl;*/
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
