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
        int x;
        cin>>x;
        if(x%2==0 && x%7==0){
            cout<<"Alice"<<endl;
        }
        else if(x%2==1 && x%9==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Charlie"<<endl;
        }
    }
}
