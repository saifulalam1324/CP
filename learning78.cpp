#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,sum=0,sum1=0,count=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];

        sum=sum+arr[i];
    }
    sum=sum/2;
    sort(arr,arr+t,greater<int>());
    for(int i=0;i<t;++i){
        sum1+=arr[i];
        count++;
        if(sum1>sum){
            break;
        }
    }
    cout<<count<<endl;
}
