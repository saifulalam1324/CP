#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int l=500000;
vector<int>checkprime(int n) {
    vector<bool>P(n+1,1);
    vector<int>primes;

    P[0]=P[1] = false;

    for (int i=2;i<=n;i++){
        if (P[i]){
            primes.push_back(i);
            if (primes.size() == l) break;
            for (ll j = (ll)i * i; j <=n; j += i)
                P[j] = false;
        }
    }

    return primes;
}

int main() {
    optimize;
    int n;
    cin>>n;
    vector<int>prime=checkprime(500000);
    cout<<prime[n-1]<<endl;

    return 0;
}
