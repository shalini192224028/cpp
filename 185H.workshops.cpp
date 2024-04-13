#include <iostream>
#include <algorithm>
using namespace std;

struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    Workshop* workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops;
    ptr->n = n;
    ptr->workshops = new Workshop[n];

    for (int i = 0; i < n; ++i) {
        ptr->workshops[i].start_time = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].end_time = start_time[i] + duration[i];
    }

    return ptr;
}

bool compareWorkshops(const Workshop& a, const Workshop& b) {
    return a.end_time < b.end_time;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    if (ptr == NULL) 
	{
	return 0;}

    sort(ptr->workshops, ptr->workshops + ptr->n, compareWorkshops);

    int maxWorkshops = 0;
    int lastEndTime = 0;

    for (int i = 0; i < ptr->n; ++i) {
        if (ptr->workshops[i].start_time >= lastEndTime) {
            maxWorkshops++;
            lastEndTime = ptr->workshops[i].end_time;
        }
    }

    return maxWorkshops;
}

int main() {
    int start_time[] = {1, 3, 0, 5, 8, 5};
    int duration[] = {1, 1, 6, 2, 2, 4};
    int n = sizeof(start_time) / sizeof(start_time[0]);

    Available_Workshops* ptr = initialize(start_time, duration, n);
    int maxWorkshops = CalculateMaxWorkshops(ptr);

    cout << "Maximum workshops that can be attended without overlap: " << maxWorkshops << endl;

}