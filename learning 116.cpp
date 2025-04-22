#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int s=1001000;
vector<bool>p(s+1,true);
void checkprimes(){
    p[0]=p[1]=false;
    for (int i=2;i*i<=s;i++) {
        if (p[i]){
            for (int j=i*i;j<=s;j+=i) {
                p[j]=false;
            }
        }
    }
}

int main() {
    optimize;
    checkprimes();
    int n;
    cin>>n;
    if(p[n]){
        cout<<n;
    }
    else{
        n++;
        while(!p[n]){
            n++;
        }
        cout<<n;
    }
    return 0;
}

