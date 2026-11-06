
#include <iostream>
using namespace std;

class course {
public:
    virtual void duration() = 0;
    virtual ~course() {

    }
};
class onlinecourse : public course {
private:
    int weeks;
    int hoursperweek;
public:
    onlinecourse(int w, int h) {
        weeks = w;
        hoursperweek = h;
    }
    void duration() override {
        cout << weeks << " " << "weeks" << endl;
        cout << "total study hours : " << weeks * hoursperweek << endl;
    }
};
class offlineclass : public course {
private:
    int months;
    int hoursperday;
public:
    offlineclass(int m, int ho) {
        months = m;
        hoursperday = ho;
    }
    void duration() override {
        cout << "offline course duration :" << months << " months" << endl;
        cout << "total study hours :" << months * 30 * hoursperday << endl;
    }
};

int main() {
    onlinecourse online(8, 3);
    offlineclass offline(6, 2);

    online.duration();
    offline.duration();



    return 0;
}











