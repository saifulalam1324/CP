#include <bits/stdc++.h>
using namespace std;
void knapsack(int n, float weight[], float profit[], float capacity) {
    float x[5000], tp = 0;
    int i, j, u;
    u = capacity;
    for (i = 0; i < n; i++)x[i] = 0.0;
    for (i = 0; i < n; i++){
            if (weight[i] > u) break;
    else {
        x[i] = 1.0;
        tp = tp + profit[i];
        u = u - weight[i];
        }
        }
    if (i < n){
        x[i] = u / weight[i];
    }
    tp = tp + (x[i] * profit[i]);
    cout<<fixed<<setprecision(2) <<tp<<endl;
}
int main() {
    float weight[5000], profit[5000], capacity;
    int num, i, j,t;cin>>t;
    while(t--)
    {
    float ratio[5000], temp;
    cin >> num;
    cin >> capacity;
    for (i = 0; i < num; i++) {
        cin >> weight[i];
    }
    for (i = 0; i < num; i++) {
        cin>> profit[i];
    }
    for (i = 0; i < num; i++) {
        ratio[i] = profit[i] / weight[i];
    }
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (ratio[i] < ratio[j]) {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
                }
            }
        }
    }
    knapsack(num, weight, profit, capacity);
    return 0;
}
