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
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        vector<int>v(s);
        for(int i=0;i<s;i++){
            cin>>v[i];
        }
        int x=v.back();
        while(v.size()>1){
            v.pop_back();
            x+=v.back();
            x--;
            v.push_back(x);
        }
    }
}
