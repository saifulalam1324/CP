#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> // Make sure to include this for std::sort

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
};

bool compareArrivalTime(const Process& a, const Process& b) {
    return a.arrivalTime < b.arrivalTime;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), compareArrivalTime);

    queue<Process> readyQueue;
    int currentTime = 0;

    for (int i = 0; i < n; ++i) {
        readyQueue.push(processes[i]);
    }

    while (!readyQueue.empty()) {
        Process currentProcess = readyQueue.front();
        readyQueue.pop();

        // If the current time is less than the arrival time, advance the current time
        currentTime = max(currentTime, currentProcess.arrivalTime);

        currentProcess.completionTime = currentTime + currentProcess.burstTime;
        currentProcess.turnaroundTime = currentProcess.completionTime - currentProcess.arrivalTime;
        currentProcess.waitingTime = currentProcess.turnaroundTime - currentProcess.burstTime;

        currentTime = currentProcess.completionTime;

        // Update the processes vector with the calculated values.
        for (int i = 0; i < n; ++i) {
            if (processes[i].id == currentProcess.id) {
                processes[i] = currentProcess;
                break;
            }
        }

    }

    cout << "\nProcess Schedule (FCFS):\n";
    cout << "------------------------------------------------------------------\n";
    cout << "| Process | Arrival Time | Burst Time | Completion Time | Waiting Time | Turnaround Time |\n";
    cout << "------------------------------------------------------------------\n";

    double totalWaitingTime = 0;
    double totalTurnaroundTime = 0;

    for (const auto& process : processes) {
        cout << "|   " << process.id << "   |      " << process.arrivalTime << "      |     " << process.burstTime << "      |        " << process.completionTime << "        |      " << process.waitingTime << "      |        " << process.turnaroundTime << "        |\n";
        totalWaitingTime += process.waitingTime;
        totalTurnaroundTime += process.turnaroundTime;
    }
    cout << "------------------------------------------------------------------\n";

    double avgWaitingTime = totalWaitingTime / n;
    double avgTurnaroundTime = totalTurnaroundTime / n;

    cout << "\nAverage Waiting Time: " << avgWaitingTime << endl;
    cout << "Average Turnaround Time: " << avgTurnaroundTime << endl;

    return 0;
}
