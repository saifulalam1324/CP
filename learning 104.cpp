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
    cin>>t;
    vector<pair<string,string>>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int s= unique(v.begin(),v.end())-v.begin();
    cout<<s<<endl;
    return 0;
}

