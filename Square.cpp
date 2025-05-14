#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

//Distance between (x1, y1) and (x2, y2):
//d = sqrt((x2 - x1)² + (y2 - y1)²)

void solve() {
    int t;
    cin >> t;

    //vector<pair<int, int> pairs(4);

    //int x, y;
    vector<int> points(8);

    while (t--) {
        for (int i = 0; i < 8; i++) cin >> points[i];

        //double d = sqrt((pow((points[6] - points[0]), 2) + pow((points[7] - points[1]), 2)));

        //double side = d / sqrt(2.0);
        //double area = d * d;

        //cout << area << endl;

        set<int> x, y;

        for (int j = 0; j < 4; j++) {
            x.insert(points[j * 2]);
            y.insert(points[j * 2 + 1]);
        }

        int side = max(abs(*x.begin() - *x.rbegin()), abs(*y.begin() - *y.rbegin()));
        cout << side * side << endl;
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
