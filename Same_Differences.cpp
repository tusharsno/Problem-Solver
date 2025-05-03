#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n;
    cin >> n;

    //unordered_map<i_64, i_64> paris;
    vector<i_64> numbers;

    for (i_64 i = 0; i < n; i++) {
        i_64 a;
        cin >> a;

        numbers.push_back(a);
    }

    vector<i_64> diff;

    for (i_64 j = 0; j < numbers.size(); j++) {
        i_64 number = numbers[j] - j;

        diff.push_back(number);
    }

    map<i_64, i_64> freq;

    for (i_64 el : diff){
        freq[el]++;
    }

    i_64 valid_pairs = 0;

    for (auto [key, count] : freq) {
        valid_pairs += (count * (count - 1)) / 2;
    }

    /*for (i_64 j = 0; j < diff.size(); j++) {
        //if (diff[j])
        for (i_64 k = 0; k < diff.size(); k++) {
            if (diff[j] == diff[k]) {
                if (j < k) {
                    valid_pairs++;
                }
            }
        }
    }*/
    cout << valid_pairs << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i_64 t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
