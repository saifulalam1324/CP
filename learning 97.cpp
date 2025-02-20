#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main(){
    int t;
    cin >> t;
    while(t--) {
        string w;
        cin>>w;
        if (w=="us") {
            cout <<"i"<< endl;
        } else {
            cout <<w.substr(0, w.length()-2) + "i" << endl;
        }
    }


}
