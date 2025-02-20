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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end(),[](const auto&p1,const auto&p2){
        if(p1.first>p2.first)return true;
        else if(p1.first == p2.first){
            return p1.second<p2.second;
        }
        return false;
    });
    int c=0;
    for(int i=0;i<n;i++){
        if(p[k-1].first==p[i].first && p[k-1].second==p[i].second){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}


