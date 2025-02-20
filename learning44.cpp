#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n, cnt = 0, i = 1, m = 1;

    cin>>n;

    while(m <= n){

        m = ((i*i) + i) / 2;

        if(m > n) break;

        n = n - m;

        cnt++;

        i++;
    }

    cout<<cnt<<endl;

}
