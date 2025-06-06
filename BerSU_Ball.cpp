#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;  //boys
    cin >> n;

    vector<int> skills_of_boys(n);
    for (int i = 0; i < n; i++) cin >> skills_of_boys[i];
        //int a;  //skills
        //cin >> a;
    //}
    sort(skills_of_boys.begin(), skills_of_boys.end());

    int m;  //girls
    cin >> m;

    vector<int> skills_of_girls(m);
    for (int i = 0; i < m; i++) cin >> skills_of_girls[i];
        //int b;  //skills
        //cin >> b;
    //}
    sort(skills_of_girls.begin(), skills_of_girls.end());

    int count_pairs = 0;
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < skills_of_girls.size(); k++) {
            if (abs(skills_of_boys[j] - skills_of_girls[k]) <= 1) {
                count_pairs++;

                skills_of_girls.erase(skills_of_girls.begin() + k);
                break;
            }
        }
    }

    cout << count_pairs << endl;
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
