#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n,t;                  //t => free minutes to read
    cin >> n >> t;            //n => took n books

    vector<int> minutes;

    for(int i = 0;i < n;i++){
        i_64 a;
        cin >> a;

        minutes.push_back(a);
    }

    i_64 left = 0,right = 0;
    i_64 current_sum = 0;
    i_64 max_books = 0;

    while(right < n){
        current_sum += minutes[right];

        while(current_sum > t){
            current_sum -= minutes[left];
            left++;
        }

        max_books = max(max_books, right - left + 1);
        right++;
    }

    cout << max_books << endl;

    /*for(int j = 0;j < minutes.size();j++){
        total_minutes1 += minutes[j];

        if(total_minutes1 > t){
            result1 = j;              //3
            break;
        }else if(total_minutes1 == t){
            result1 = j+1;
            break;
        }else if(minutes.size() == 1){
            if(t > minutes[j]){
                result1 = j+1;
                break;
            }
        }
    }

    reverse(minutes.begin(), minutes.end());

    for(int j = 0;j < minutes.size();j++){
        total_minutes2 += minutes[j];

        if(total_minutes2 > t){
            result2 = j;
            break;
        }else if(total_minutes2 == t){
            result2 = j+1;
            break;
        }else if(minutes.size() == 1){
            if(t > minutes[j]){
                result2 = j+1;
                break;
            }
        }
    }

    //cout << result1 << endl;
    //cout << result2 << endl;

    cout << max(result1, result2) << endl;*/
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
