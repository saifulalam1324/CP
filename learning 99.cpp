#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main() {

    optimize;
    fraction;
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<pair<long long, long long>> arr(n);
        long long base_score = 0;
        for (int i = 0; i < n; i++) {
            long long sum = 0, score = 0, running_sum = 0;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                sum += x;
                running_sum += x;
                score += running_sum;
            }

            arr[i] = {sum, score};
            base_score += score;
        }
        sort(arr.rbegin(), arr.rend());


        long long extra_score = 0;
        for (int i = 0; i < n; i++) {
            extra_score += (long long)(n - 1 - i) * arr[i].first;
        }

        long long final_score = base_score + m * extra_score;
        cout << final_score <<endl;
    }

    return 0;
}
