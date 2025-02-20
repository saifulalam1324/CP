#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans = 0;
        for (auto &entry : mp) {
            ans += entry.second / 2;
        }


        cout << ans << endl;
    }

    return 0;
}
