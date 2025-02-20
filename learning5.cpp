#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    while(n--){
        cin>>a;
        int A=0,B=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='A'){
                A++;
            }
            if(a[i]=='B'){
                B++;
            }
        }
        if(A>B){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }


    return 0;
}
