//
// Created by dsit on 10/24/19.
//

class time_value {
private:
    int hour;
    int minutes;
public:
    time_value();
    ~time_value();

    int getHour() const;

    void setHour(int hour);

    int getMinutes() const;

    void setMinutes(int minutes);
};

int time_value::getHour() const {
    return hour;
}

void time_value::setHour(int hour) {
    time_value::hour = hour;
}

int time_value::getMinutes() const {
    return minutes;
}

void time_value::setMinutes(int minutes) {
    time_value::minutes = minutes;
}

time_value::time_value() {
    hour = 0;
    minutes = 0;
}

time_value::~time_value() {
}
