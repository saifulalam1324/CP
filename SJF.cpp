#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    fraction;
    int processNumber;
    cout<<"Total Number Of Process"<<endl;
    cin>>processNumber;
    vector<pair<int,pair<int,int>>>p(processNumber);
    for(int i=0;i<processNumber;i++){
        cout<<"Enter Process Id Arrival Time and Burst Time: "<<i+1<<endl;
        cin>>p[i].first>>p[i].second.first>>p[i].second.second;
    }
    sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
        if (a.second.first == b.second.first) {
            return a.second.second < b.second.second;
        }
        return a.second.first < b.second.first;
    });
    int currentTime=0;
    float Avgwt = 0;
    vector<int> ct, tat, wt;
    vector<bool> isCompleted(processNumber, false);

    for (int i = 0; i < processNumber; i++) {
        int index = -1;
        int minBurst = INT_MAX;
        for (int j = 0; j < processNumber; j++) {
            if (!isCompleted[j] && p[j].second.first <= currentTime) {
                if (p[j].second.second < minBurst) {
                    minBurst = p[j].second.second;
                    index = j;
                }
            }
        }

        if (index == -1) {
            for (int j = 0; j < processNumber; j++) {
                if (!isCompleted[j]) {
                    currentTime = p[j].second.first;
                    index = j;
                    break;
                }
            }
        }

        currentTime += p[index].second.second;
        int TAT = currentTime - p[index].second.first;
        int WT = TAT - p[index].second.second;

        tat.push_back(TAT);
        wt.push_back(WT);
        ct.push_back(currentTime);

        isCompleted[index] = true;
    }

    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| Process ID | Arrival Time | Burst Time | Completion Time | Turnaround Time | Waiting Time |" << endl;

    for (int i = 0; i < processNumber; i++) {
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "     " << p[i].first << "            " << p[i].second.first << "              " << p[i].second.second << "                 " << ct[i] << "              " << tat[i] << "                 " << wt[i] << endl;
        Avgwt += wt[i];
    }

    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Average Waiting Time: " << Avgwt / processNumber << endl;
    optimize;
    return 0;
}
