#include <iostream>
using namespace std;
const int mx =2e8+12;
bool arr[mx];
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        arr[i*i]=1;

    }
    int c=0;
    for(int i=1;i<=t;i++){
        for(int j=i;j<=t;j++){
            int v = (i*i) + (j*j);
            if(arr[v]){
                c++;
        }
    }
    }

    cout<<c<<endl;



    return 0;

}
