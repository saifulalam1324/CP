#include<bits/stdc++.h>
using namespace std;
int main(){
    char n[30];
    cin>>n;
    int s= n[0];
    int r=strlen(n);
    for(int i=0;i<r;i++){
        int riv = n[i]-'0';
        int l = 9-riv;
        if(l<riv){
            n[i]=l+'0';
        }
    }
    if(n[0]=='0'){
        n[0]=s;
    }
    for(int j=0;j<r;j++){
        cout<<n[j];
    }
}
