//#include <iostream>
//#include <string>
//using namespace std; 
//
//class queue {
//	string* documentname;
//	int* pages;
//	int front;
//	int rear;
//	int maxsize;
//public:
//	queue(int size) {
//		maxsize = size;
//		front = 0;
//		rear = -1;
//		documentname = new string[maxsize];
//		pages = new int[maxsize];
//	}
//	bool isempty() {
//		return front > rear;
//		}
//	bool isfull() {
//		return rear == maxsize - 1;
//		}
//
//	void addjob(string name, int page) {
//		if (isfull()) {
//			cout << "queue full";
//			return;
//		}
//		rear++;
//		documentname[rear] = name;
//		pages[rear] = page;
//		cout << "Document added successfully." << endl;
//	}
//
//	void processjob() {
//		if (isempty()) {
//			cout << "queue is empty";
//			return;
//		}
//		cout << "printing: " << documentname[front] << endl;
//
//		front++;
//
//		if (front > rear) {
//			front = 0;
//			rear = -1;
//		}
//	}
//	void displayjobs() {
//		if (isempty()) {
//			cout << "queue is empty";
//			return;
//		}
//		for (int i = front; i <= rear; i++) {
//			cout << "Document: " << documentname[i] << endl;
//			cout << "pages: " << pages[i] << endl;
//
//		}
//	}
//	~queue() {
//		delete[] documentname;
//		delete[] pages;
//	}
//};
//int main() {
//	queue q(5);
//	
//		int choice;
//		int page;
//		string name;
//	
//		do {
//			cout << "1. Add print job" << endl;
//			cout << "2. process print job" << endl;
//			cout << "3. Display pending jobs" << endl;
//			cout << "4. Exit" << endl;
//
//			cout << "enter choice: ";
//			cin >> choice;
//
//			switch (choice) {
//
//			case 1:
//				cout << "document:";
//				cin.ignore();
//				getline(cin, name);
//
//				cout << "pages:";
//				cin >> page;
//
//				q.addjob(name, page);
//				break;
//
//			case 2:
//				q.processjob();
//				break;
//
//			case 3:
//				q.displayjobs();
//				break;
//			case 4:
//				cout << "program ended" << endl;
//				break;
//
//			default:
//				cout << "invalid choice" << endl;
//			}
//		} while (choice != 4);
//
//	return 0;
//}