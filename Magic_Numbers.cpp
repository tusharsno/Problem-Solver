#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n;
    cin >> n;

    vector<int> numbers;

    while(n > 0){
        int take = n % 10;
        numbers.push_back(take);
        n /= 10;
    }

    reverse(numbers.begin(), numbers.end());

    //int first_digit = numbers[0];
    //int second_digit = numbers[1];
    //int count = 0;
    //int print = 0;

    int i = 0;
    int flag = 0;
    while(i < numbers.size()){
        if(i + 2 < numbers.size() && numbers[i] == 1 && numbers[i+1] == 4 && numbers[i+2] == 4){
           i += 3;
        } else if(i+1 < numbers.size() && numbers[i] == 1 && numbers[i+1] == 4){
              i += 2;
        } else if(numbers[i] == 1){
            i += 1;
        } else{
            flag = 1;
            break;
        }
    }

    if(flag == 0) cout << "YES\n";
    else cout << "NO\n";
    //cout << count << endl;

    //if(print == 0 && first_digit == 1 && count == numbers.size()-1) cout << "YES\n";
    //else cout << "NO\n";

    //for(int el : numbers){
        //cout << el << " ";
    //}cout << endl;
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
