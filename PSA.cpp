#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
using namespace std;
int main() {
    fraction;
    int processNumber;
    cout << "Total Number Of Process" << endl;
    cin >> processNumber;
    vector<pair<int, pair<int, pair<int, int>>>> p(processNumber);
    for (int i = 0; i < processNumber; i++) {
        cout << "Enter Process Id Priority Arrival Time and Burst Time: " << i + 1 << endl;
        cin >> p[i].first >> p[i].second.first >> p[i].second.second.first >> p[i].second.second.second;
    }
    sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
        if (a.second.second.first == b.second.second.first) {
            return a.second.first < b.second.first;
        }
        return a.second.second.first < b.second.second.first;
    });
    int currentTime = 0;
    float totalWaitingTime = 0;
    vector<int> completionTimes(processNumber);
    vector<int> turnaroundTimes(processNumber);
    vector<int> waitingTimes(processNumber);
    vector<bool> isCompleted(processNumber, false);
    for (int i = 0; i < processNumber; ++i) {
        int highestPriorityIndex = -1;
        int highestPriority = -1;

         for (int j = 0; j < processNumber; ++j) {
            if (!isCompleted[j] && p[j].second.second.first <= currentTime) {
                if (p[j].second.first < highestPriority || highestPriorityIndex == -1) {
                    highestPriority = p[j].second.first;
                    highestPriorityIndex = j;
                }
            }
        }
        if (highestPriorityIndex == -1) {
             int nextArrivalTime = -1;
            for(int j = 0; j < processNumber; j++){
                if(!isCompleted[j]){
                    if(nextArrivalTime == -1 || p[j].second.second.first < nextArrivalTime){
                        nextArrivalTime = p[j].second.second.first;
                    }
                }
            }
            currentTime = nextArrivalTime;
             for (int j = 0; j < processNumber; ++j) {
            if (!isCompleted[j] && p[j].second.second.first <= currentTime) {
                if (p[j].second.first < highestPriority || highestPriorityIndex == -1) {
                    highestPriority = p[j].second.first;
                    highestPriorityIndex = j;
                }
            }
        }
        }
        completionTimes[highestPriorityIndex] = currentTime + p[highestPriorityIndex].second.second.second;
        turnaroundTimes[highestPriorityIndex] = completionTimes[highestPriorityIndex] - p[highestPriorityIndex].second.second.first;
        waitingTimes[highestPriorityIndex] = turnaroundTimes[highestPriorityIndex] - p[highestPriorityIndex].second.second.second;

        currentTime = completionTimes[highestPriorityIndex];
        totalWaitingTime += waitingTimes[highestPriorityIndex];
        isCompleted[highestPriorityIndex] = true;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"| Process ID | Priority | Arrival Time | Burst Time | Completion Time | Turnaround Time | Waiting Time |"<< endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;


    for (int i = 0; i < processNumber; ++i) {
        cout<< p[i].first <<"             "<< p[i].second.first << "                   "<< p[i].second.second.first << "               "<< p[i].second.second.second <<"               "<< completionTimes[i] <<"                "<< turnaroundTimes[i] << "                "<< waitingTimes[i] << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    cout << "Average Waiting Time: " << totalWaitingTime / processNumber << endl;
    optimize;
    return 0;
}
