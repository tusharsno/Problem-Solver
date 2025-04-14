#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

/*int check(int x){
    int result = 0;
    while(x > 0){
        result += x % 10;
        x /= 10;
    }
    return result;
}*/


void solve() {
    int year;
    cin >> year;

    while(true){
        year++;

        int y = year;
        set<int> digits;

        while(y > 0){
            digits.insert(y % 10);
            y /= 10;
        }

        if(digits.size() == 4){
            cout << year << endl;
            break;
        }
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
