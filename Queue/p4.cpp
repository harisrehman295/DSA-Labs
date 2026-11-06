//#include <iostream>
//#include <string>
//using namespace std;
//
//class queue {
//	string* arr;
//	int front;
//	int rear;
//	int maxsize;
//public:
//	queue(int s) {
//		maxsize = s;
//		front = 0;
//		rear = -1;
//		arr = new string[maxsize];
//	}
//	bool isempty() {
//		return front > rear;
//	}
//	bool isfull() {
//		return rear == maxsize - 1;
//	}
//	void addstudent(string name) {
//		if (isfull()) {
//			cout << "queue is full";
//			return;
//		}
//		rear++;
//		arr[rear] = name;
//	}
//	void servestudent() {
//		if (isempty()) {
//			cout << "queue is empty";
//			return;
//		}
//		cout << "serving student: " << arr[front] << endl;
//		front++;
//		if (front > rear) {
//			front = 0;
//			rear = -1;
//		}
//	}
//	void displayqueue() {
//		if (isempty()) {
//			cout << "queue is empty";
//			return;
//		}
//		for (int i = front; i <= rear; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	void displayfirststudent() {
//		if (isempty()) {
//			cout << "queue is empty";
//			return;
//		}
//		cout << "First studemt: " << arr[front] << endl;
//	}
//	~queue() {
//		delete[] arr;
//	}
//};
//int main() {
//	queue q(5);
//
//	int choice;
//	string name;
//
//	do {
//		cout << "1. Add student" << endl;
//		cout << "2. Serve Student" << endl;
//		cout << "3. Display Queue" << endl;
//		cout << "4. Display First Student" << endl;
//		cout << "5. Exit" << endl;
//
//		cout << "enter choice: ";
//		cin >> choice;
//
//		switch (choice) {
//
//		case 1:
//			cout << "enter name:";
//			cin >> name;
//			q.addstudent(name);
//			break;
//
//		case 2:
//			q.servestudent();
//			break;
//		case 3:
//			q.displayqueue();
//			break;
//		case 4:
//			q.displayfirststudent();
//			break;
//		case 5:
//			cout << "program ended" << endl;
//			break;
//
//		default:
//			cout << "invalid choice" << endl;
//		}
//	} while (choice != 5);
//	return 0;
//}