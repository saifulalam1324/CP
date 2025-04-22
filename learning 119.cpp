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
    while(t--){
        int n;
        cin>>n;
        map<int,int>arr1;
        int c=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[arr[i]]++;
            if(arr1[0]>=3 && arr1[1]>=1 && arr1[2]>=2 && arr1[3]>=1 && arr1[5]>=1 && c==0){
                c=i+1;
            }
        }
        cout<<c<<endl;
    }
}
