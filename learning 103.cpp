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
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int counts=0;
        if(s[0]=='1'){
            counts++;
        }
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                counts++;
            }
        }
        cout<<counts<<endl;

    }

    return 0;
}
