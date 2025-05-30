#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n;
    cin >> n;

    vector<i_64> students;
    map<i_64, i_64> freq;
    set<i_64> unique_students;

    i_64 max_freq = 0;
    for (i_64 i = 0; i < n; i++) {
        i_64 a;
        cin >> a;
        unique_students.insert(a);

        freq[a]++;
        max_freq = max(max_freq, freq[a]);
    }

    vector<i_64> cat1, cat2;
    for (auto &[num, f] : freq) {
        if (f == 1) {
            cat1.push_back(num);
        } else {
            for (i_64 j = 0; j < f; j++) {
                cat2.push_back(num);
            }
        }
    }

    //if (cat1.size() > 1) cat1.push_back(1);

    i_64 cat1_len = cat1.size();
    i_64 cat2_len = cat2.size();
    i_64 len_of_unique_students = unique_students.size();

    i_64 total_len = cat1_len + cat2_len;
    i_64 total_len2 = len_of_unique_students + cat2_len;
    //cout << total_len << endl;

    //cout << cat1_len << " " << cat2_len << " " << len_of_unique_students<< endl;

    i_64 result;
    if (total_len2 <= students.size()) {
        result = min(max_freq, len_of_unique_students);
    } else {
        result = min(cat1_len, max_freq);
    }
    //i_64 result = min(cat2_len, len_of_unique_students);

    if (total_len == 1) {
        cout << 0 << endl;
    } else {
        cout << (result == 0 ? 1 : result) << endl;
    }
    //cout << (result == 0 ? 1 : result) << endl;
    //cout << result << endl;

    //int max_freq = 0;
    /*for (auto pair : freq) {
        cout << pair.first << " " << pair.second << endl;
    }*/
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
