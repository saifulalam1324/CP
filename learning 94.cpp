#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;vector<int>ck;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        int s=l%10;
        int r=l/10;
        cout<<s+r<<endl;
    }
}
