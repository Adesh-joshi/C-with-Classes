#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    Time add(const Time& other) {
        int totalMinutes = hours * 60 + minutes + other.hours * 60 + other.minutes;
        int newHours = totalMinutes / 60;
        int newMinutes = totalMinutes % 60;
        return Time(newHours, newMinutes);
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" <<endl;
    }
};

Time inputTime() {
    int hours, minutes;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    return Time(hours, minutes);
}

int main() {
    cout << "Enter first time:" <<endl;
    Time time1 = inputTime();

    cout << "\nEnter second time:" <<endl;
    Time time2 = inputTime();

    Time totalTime = time1.add(time2);

    cout << "\nFirst time:" <<endl;
    time1.display();

    cout << "\nSecond time:" << endl;
    time2.display();

    cout << "\nTotal time:" <<endl;
    totalTime.display();

    return 0;
}
