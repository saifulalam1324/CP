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
        int s;int c=0;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        sort(arr,arr+s);
        for(int i=0;i<s;i++){
            if(arr[i]!=arr[i+1]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}



