#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define dl double
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main() {
    fraction;
    int processNumber;
    cout << "Total Number Of Process" << endl;
    cin >> processNumber;

    vector<pair<int, pair<int, int>>> processes(processNumber);
    for (int i = 0; i < processNumber; i++) {
        cout << "Enter Process Id Arrival Time and Burst Time: " << i + 1 << endl;
        cin >> processes[i].first >> processes[i].second.first >> processes[i].second.second;
    }

    int quantum;
    cout << "Enter Time Quantum: ";
    cin >> quantum;

    vector<int> remainingBurstTimes(processNumber);
    vector<int> completionTimes(processNumber);
    vector<int> turnaroundTimes(processNumber);
    vector<int> waitingTimes(processNumber);
    vector<bool> isCompleted(processNumber, false);
    int currentTime = 0;
    float totalWaitingTime = 0;

    for (int i = 0; i < processNumber; ++i) {
        remainingBurstTimes[i] = processes[i].second.second;
    }

    int completedProcesses = 0;

    while (completedProcesses < processNumber) {
        bool processExecuted = false;

        for (int i = 0; i < processNumber; ++i) {
            if (!isCompleted[i] && processes[i].second.first <= currentTime) {
                processExecuted = true;
                int executionTime = min(quantum, remainingBurstTimes[i]);
                currentTime += executionTime;
                remainingBurstTimes[i] -= executionTime;

                if (remainingBurstTimes[i] == 0) {
                    isCompleted[i] = true;
                    completionTimes[i] = currentTime;
                    turnaroundTimes[i] = completionTimes[i] - processes[i].second.first;
                    waitingTimes[i] = turnaroundTimes[i] - processes[i].second.second;
                    totalWaitingTime += waitingTimes[i];
                    completedProcesses++;
                }
            }
        }

        if (!processExecuted) {

            int nextArrivalTime = -1;
            for (int i = 0; i < processNumber; ++i) {
                if (!isCompleted[i]) {
                    if (nextArrivalTime == -1 || processes[i].second.first < nextArrivalTime) {
                        nextArrivalTime = processes[i].second.first;
                    }
                }
            }
            if (nextArrivalTime != -1) {
                currentTime = nextArrivalTime;
            } else if (completedProcesses < processNumber) {
                for (int i = 0; i < processNumber; i++) {
                    if (!isCompleted[i]) {
                        processExecuted = true;
                        int executionTime = min(quantum, remainingBurstTimes[i]);
                        currentTime += executionTime;
                        remainingBurstTimes[i] -= executionTime;

                        if (remainingBurstTimes[i] == 0) {
                            isCompleted[i] = true;
                            completionTimes[i] = currentTime;
                            turnaroundTimes[i] = completionTimes[i] - processes[i].second.first;
                            waitingTimes[i] = turnaroundTimes[i] - processes[i].second.second;
                            totalWaitingTime += waitingTimes[i];
                            completedProcesses++;
                        }
                    }
                }
            }
        }
    }

      cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"| Process ID | Arrival Time | Burst Time | Completion Time | Turnaround Time | Waiting Time |"<< endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < processNumber; ++i) {
        cout << processes[i].first << "               "<< processes[i].second.first <<"               "<< processes[i].second.second << "               " << completionTimes[i] <<"               "<< turnaroundTimes[i] <<"               "<< waitingTimes[i] << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    cout << "Average Waiting Time: " << totalWaitingTime / processNumber << endl;


    return 0;
}
