#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    int ans = 0;
    for (char ch = 'A'; ch <= 'H'; ++ch) {
        ans += max(0, m - (int)count(a.begin(), a.end(), ch));
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
