#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n,t;
    cin >> n >> t;

    vector<int> numbers(n-1);

    for(int i = 0;i < n-1;i++){
        cin >> numbers[i];
    }

    int initial_pos =  1; //1
    int count = 0;

    while(initial_pos < t){
        int step = initial_pos + numbers[initial_pos-1]; //3

        if(step == t){
            //cout << "YES\n";
            count++;
            break;
        }else{
            initial_pos = step;  //3
            //continue;
        }
    }

    cout << (count == 1 ? "YES\n" : "NO\n");

    //cout << "NO\n";
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
