#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int s=1000s000;
vector<bool>p(s+1,true);
vector<bool>p1(s+1,false);
void checkprimes(){
    p[0]=p[1]=false;
    for (int i=2;i*i<=s;i++) {
        if (p[i]){
            for (int j=i*i;j<=s;j+=i) {
                p[j]=false;
            }
        }
    }
    for(int i=2;i<=s;i++){
        if(p[i]){
            p1[i*i]=true;
        }
    }
}

int main() {
    checkprimes();
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;

        ll r = sqrt(x);
        if (r*r==x&&p1[r]) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
