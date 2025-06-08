#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 a;
    cin >> a;

    vector<i_64> numbers(a);

    for (i_64 i = 0; i < a; i++) cin >> numbers[i];

    vector<i_64> old_numbers(a);
    old_numbers = numbers;
    //for (i_64 d : old_numbers) {
        //cout << d << " ";
    //} cout << endl;

    sort(numbers.begin(), numbers.end());
    //for (i_64 d : numbers) {
        //cout << d << " ";
    //} cout << endl;

    i_64 left = 0, right = a -1;

    while (left < a && numbers[left] == old_numbers[left]) left++;

    if (left == a) {
        cout << "yes\n1 1\n";
        return;
    }

    while (right >= 0 && numbers[right] == old_numbers[right]) right--;

    reverse(numbers.begin() + left, numbers.begin() + right + 1);

    if (numbers == old_numbers) cout << "yes\n" << left + 1 << " " << right + 1 << endl;
    else cout << "no\n";
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
