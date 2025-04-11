#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 x;
    cin >> x;

    string s = to_string(x);

    char first_ch = s[0];
    //int digit = first_ch - '0';

    //cout << digit << endl;

    i_64 result = 0;

    for(int i = 0;i < s.size();i++){ //27
        //i_64 step1 = 9 - s[i];

        i_64 digit = s[i] - '0';   //2 //7
        i_64 first_op = 9 - digit; //9 - 2 = 7 //2

        i_64 new_digit;

        if(i == 0 && first_op == 0) new_digit = digit;
        else new_digit = min(digit,first_op);//2,7 = 2 //7,2 = 2

        //new_digit = min(digit,first_op);//2,7 = 2 //7,2 = 2
        result = result*10 + new_digit; //2 //22
    }
    //cout << s << endl;
    //i_64 result = stoll(s);
    cout << result << endl;
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


