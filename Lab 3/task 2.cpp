/*
#include <iostream>
using namespace std;
class employee {
public:
	virtual double calculatesalary() = 0;
	virtual ~employee() {};
};
class fulltimeemployee : public employee {
private:
	double fixedsalary;
public:
	fulltimeemployee(double s) {
		fixedsalary = s;
	}
	double calculatesalary() override {
		return fixedsalary;
	}
};
class parttimeemployee : public employee {
private:
	double hoursworked;
	double hourlyrate;
public:
	parttimeemployee(double hw, double hr) {
		hoursworked = hw;
		hourlyrate = hr;
	}
	double calculatesalary() override {
		return hoursworked * hourlyrate;
	}
};
int main() {
	fulltimeemployee fulltime(80000);
	parttimeemployee parttime(80, 700);

	cout << "full time employee salary" << fulltime.calculatesalary() << endl;
	cout << "half time employee salary" << parttime.calculatesalary() << endl;
	
	return 0;
}
*/