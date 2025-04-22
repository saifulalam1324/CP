#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main(){
    optimize;
    fraction;
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int>a(s);map<int,int>mp;
        for(int i=0;i<s;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        cout<<mp.size()<<endl;
    }
}
