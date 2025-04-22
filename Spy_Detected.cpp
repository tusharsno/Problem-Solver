#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    vector<int> numbers;

    for(int i = 0;i < n;i++){
        int a;
        cin >> a;

        numbers.push_back(a);
    }

    int first = numbers[0];

    for(int j = 1;j < numbers.size();j++){
        if(first != numbers[j]){
            if(numbers[j] == numbers[j+1]){
                cout << 1 << endl;
                break;
            } else {
                cout <<  j+1 << endl;
                break;
            }
        }
    }
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
