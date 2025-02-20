#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=n/2-1;i>=1;i--){
            if(a[i]==a[i+1] || a[n-i+1]==a[n-i]){
                swap(a[i],a[n-i+1]);
            }
        }
        int re=0;
        for(int i=1;i<n;i++){
            if(a[i]==a[i+1])
            re++;
        }
        cout<<re<<endl;
    }
}
