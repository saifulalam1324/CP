#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

vector<int>checkprime(int n) {
    vector<bool>P(n+1,1);
    vector<int>primes;

    P[0]=P[1] = false;

    for (int i=2;i<=n;i++){
        if (P[i]){
            primes.push_back(i);
            for (int j = i * i; j <=n; j += i)
                P[j] = false;
        }
    }

    return primes;
}

void range(int L, int R) {
    if (L<2){
        L=2;
    }
    int sqrtR = sqrt(R);
    vector<int> primes = checkprime(sqrtR);
    vector<bool>P(R-L+1,true);
    for (auto u:primes) {
        int s=max(u*u,(L+u-1)/u*u);
        for (int i=s;i<=R;i+=u)
            P[i-L]=false;
    }
    for (int i=0;i<=R-L;i++) {
        if (P[i]){
            cout <<(i+L)<<endl;
        }

    }
    cout<<endl;
}

int main() {
    optimize;
    int t;
    cin>>t;
    while(t--){
      int l, r;
      cin >> l >> r;
      range(l,r);
    }

    return 0;
}
