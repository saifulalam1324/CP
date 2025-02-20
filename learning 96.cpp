#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--){
        int k,t;
        cin>>k>>t;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        if(k%2==0){
            int l=1,j=k;
            while(l!=k){
                if(abs(a[l]-a[k])%t==0){
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    cout<<"YES"<<endl;
                    cout<<l<<endl;
                    break;
                }
                l++;k--;
            }
        }
        else{
            float r= ceil(k%2);

            int s=1,o=k-r;
            while(s>0 && o>0){
                if(abs(a[s]-a[o])){

                }
            }
        }
    }

}
