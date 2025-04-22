#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main(){
    int n;
    cin>>n;
    while(n--){
    string s;
    char s1;
    cin>>s1;
    getline(cin,s);
    s=s1+s;
    vector<string>r;map<string,int>mp;
    string temp;
    for(auto u:s){
        if(isspace(u)){
        r.push_back(temp);
        temp.clear();
        }
        else{
            temp+=u;
        }
    }
    r.push_back(temp);
    int mxfr=0
    for(auto u:r){
        mp[u]++;
        mxfr=max(mxfr,mp[u]);
    }
    string ans="";
    for(auto u:r){
        if(mp[u]==mxfr){
            ans=u;
        }
    }


}
}
