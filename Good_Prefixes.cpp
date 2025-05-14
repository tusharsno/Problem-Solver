#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

//i_64 sum_calculate (vector<i_64> arr) {
    //i_64 sum = 0;
    //for (i_64 num : arr) sum += num;

    //return sum;
//}


void solve() {
    i_64 n;
    cin >> n;

    vector<i_64> numbers(n);

    for (i_64 i = 0; i < n; i++) cin >> numbers[i];

    //sort(numbers.begin(), numbers.end());
    //reverse(numbers.begin(), numbers.end());
    i_64 sum = 0;
    i_64 max_el = LLONG_MIN;
    i_64 count = 0;

    //if (numbers.size() == 1 && numbers[0] == 0) cout << 1 << endl;
    //else if (numbers.size() == 1 && numbers[0] == 1) cout << 0 << endl;
    //else {
        //if (find(numbers.begin(), numbers.end(), 0) != numbers.end()) count++;
        //if (numbers[0] == 0) count++;


        for (i_64 j = 0; j < n; j++) {
            //i_64 max_el = *max_element(numbers.begin(), numbers.end());

            sum += numbers[j];
            max_el = max(max_el, numbers[j]);

            if (2 * max_el == sum) count++;

            //i_64 sum = sum_calculate(numbers);

            //i_64 sum = 0;
            //for (i_64 num : numbers) sum += num;

            //sum -= max_el;

            //if (sum == max_el) count++;

            //numbers.pop_back();
        }

        cout << count << endl;
    //}
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
