#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main(){
    optimize;
    int t;
    cin>>t;
    int a,b;
    while(t--){
        cin>>a>>b;
        vector<pair<int,int>>s(b);map<pair<int,int>,int>mp;
        for(int i=0;i<b;i++){
            cin>>s[i].first>>s[i].second;
            mp[{s[i].first,s[i].second}]++;
        }
        cout<<mp.size()<<endl;
        if(b!=mp.size()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


    }
}


