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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool s=false;
        for(int i=0;i<n-1;i+=2){
            if(arr[i]==arr[i+1]){
                s=true;
                int rr=arr[i];
                for(auto u:arr){
                    if (rr==u){
                        u+=1;
                    }
                }
            }
            else{
                s=false;

            }
        }
        if(s==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
