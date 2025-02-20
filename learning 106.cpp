#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int a[100123];
int main(){
    optimize;
    fraction;
    map<long long,int>cnt;
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=v[n-1];i++){
        if(cnt[i]>0){
            cout<<cnt[i]<<endl;
        }
    }
}
