#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d,e=0;
        cin>>a>>b>>c>>d;
        if(a>c){
           e++;
        }
        if(a>d){
            e++;
        }
        if(b>c){
            e++;
        }
        if(b>d){
            e++;
        }
        cout<<e<<endl;
    }
}
