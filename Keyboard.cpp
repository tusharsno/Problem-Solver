#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    char c;
    cin >> c;

    string s;
    cin >> s;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    unordered_map<char, char> left_shift;

    if(c == 'R'){
        for(int i = 1;i < keyboard.size();i++){
            left_shift[keyboard[i]] = keyboard[i-1];
        }
    }else{
        for(int i = 0;i < keyboard.size()-1;i++){
            left_shift[keyboard[i]] = keyboard[i+1];
        }
    }

    for(char &ch : s){
        ch = left_shift[ch];
    }

    //for(int i = 0;i < s.size();i++){
        //s[i] = left_shift[s[i]];
    //}

    cout << s << endl;

    /*if(c == 'R'){
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'p') s[i] = 'o';
            else if(s[i] == 'o') s[i] = 'i';
            else if(s[i] == 'i') s[i] = 'u';
            else if(s[i] == 'u') s[i] = 'y';
            else if(s[i] == 'y') s[i] = 't';
            else if(s[i] == 't') s[i] = 'r';
            else if(s[i] == 'r') s[i] = 'e';
            else if(s[i] == 'e') s[i] = 'w';
            else if(s[i] == 'w') s[i] = 'q';

            if(s[i] == ';') s[i] = 'l';
            else if(s[i] == 'l') s[i] = 'k';
            else if(s[i] == 'k') s[i] = 'j';
            else if(s[i] == 'j') s[i] = 'h';
            else if(s[i] == 'h') s[i] = 'g';
            else if(s[i] == 'g') s[i] = 'f';
            else if(s[i] == 'f') s[i] = 'd';
            else if(s[i] == 'd') s[i] = 's';
            else if(s[i] == 's') s[i] = 'a';

            if(s[i] == '/') s[i] = '.';
            else if(s[i] == '.') s[i] = ',';
            else if(s[i] == ',') s[i] = 'm';
            else if(s[i] == 'm') s[i] = 'n';
            else if(s[i] == 'n') s[i] = 'b';
            else if(s[i] == 'b') s[i] = 'v';
            else if(s[i] == 'v') s[i] = 'c';
            else if(s[i] == 'c') s[i] = 'x';
            else if(s[i] == 'x') s[i] = 'z';
        }
    }
    cout << s << endl;*/
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
