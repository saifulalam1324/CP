#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main(){
    optimize;
    int n;
    cin>>n;map<string,int>mp;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        if(mp[s]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        mp[s]=i;
    }
}
