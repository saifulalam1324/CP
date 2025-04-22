#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int checkprimes(int n) {
    vector<int>p(n+1,0);
    for (int i=2;i<=n;i++) {
        if (p[i]==0) {
            for (int j=i;j<=n;j+=i) {
                p[j]++;
            }
        }
    }
    int c=0;
    for (int i=1;i<=n;i++) {
        if (p[i]==2) {
            c++;
        }
    }
    return c;
}

int main() {
    optimize;
    int n;
    cin>>n;
    cout<<checkprimes(n)<<endl;
    return 0;
}
