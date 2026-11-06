//#include <iostream>
//#include <string>
//using namespace std;
//
//class stack {
//	string* arr;
//	int top;
//	int size;
//public:
//	stack(int s) {
//		size = s;
//		top = -1;
//		arr = new string[size];
//	}
//
//	bool isfull() {
//		return top == size - 1;
//	}
//
//	bool isempty() {
//		return top == -1;
//	}
//
//	void push(string value) {
//		if (isfull()) {
//			cout << "stack is full";
//			return;
//		}
//		top++;
//		arr[top] = value;
//	}
//
//	string pop() {
//		if (isempty()) {
//			cout << "stack is empty";
//			return "";
//		}
//		string value = arr[top];
//		top--;
//		return value;
//	}
//
//	void displaycurrent() {
//		if (!isempty()) {
//			cout << "current page : " << arr[top] << endl;
//		}
//	}
//
//	void back() {
//		if (top <= 0) {
//			cout << "no pages availabe" << endl;
//			return;
//		}
//		pop();
//		displaycurrent();
//	}
//
//	~stack() {
//		delete[] arr;
//	}
//};
//
//int main() {
//
//	stack s(5);
//	string page;
//	char choice;
//
//	cout << "enter 5 webpage names:" << endl;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "page " << i + 1 << ": ";
//		cin >> page;
//
//		s.push(page);
//	}
//
//	do {
//		cout << "press B for Back or Q to quit: ";
//		cin >> choice;
//
//		if (choice == 'B' || choice == 'b') {
//			s.back();
//		}
//		else if (choice != 'Q' && choice != 'q') {
//			cout << "invalid choice" << endl;
//		}
//	} while (choice != 'Q' && choice != 'q');
//
//	return 0;
//}