//
// Created by dsit on 10/24/19.
//
#include <vector>
#include "time_value.h"

using namespace std;

typedef time_value t;

class alarm {
private:
    vector<t> time_arr;
public:

    void addAlarm(int hour, int minutes) {
        t time;
        time.setHour(hour);
        time.setMinutes(minutes);
        time_arr.push_back(time);
    }

    void displayAlarms() {
        vector<t>::iterator it;
        int i = 1;
        for (it = time_arr.begin(); it != time_arr.end(); it++) {
            cout << i << ". " << it->getHour() << ":" << it->getMinutes();
            cout << endl;
        }
    }

    void displayOneAlarm(int index) {
        cout << time_arr[index].getHour() << " : " << time_arr[index].getMinutes();
    }

    void updateAlarm(int index, int hour, int minutes) {
        time_arr[index].setHour(hour);
        time_arr[index].setMinutes(minutes);
    }

    void removeAlarm(int index) {
        time_arr.erase(time_arr.begin() + index);
    }
};


