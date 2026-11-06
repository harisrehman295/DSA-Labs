//#include <iostream>
//using namespace std;
//
//class stack {
//	int* arr;
//	int top;
//	int maxsize;
//public:
//	stack(int s) {
//		maxsize = s;
//		top = -1;
//		arr = new int[maxsize];
//	}
//	bool isfull() {
//				return top == maxsize - 1;
//			}
//	bool isempty() {
//		return top == -1;
//	}
//	void push(int value) {
//		if (isfull()) {
//			cout << "stcak is full";
//			return;
//		}
//		top++;
//		arr[top] = value;
//	}
//	int pop() {
//		if (isempty()) {
//			return -1;
//		}
//		int value = arr[top];
//		top--;
//		return value;
//	}
//
//	void decimaltobinary(int num) {
//
//		while (num > 0) {
//			int remainder = num % 2;
//			push(remainder);
//			num = num / 2;
//		}
//		cout << "Binary: ";
//
//		while (!isempty()) {
//			cout <<pop();
//		}
//	}
//
//	~stack() {
//		delete[] arr;
//	}
//};
//
//int main() {
//	int num;
//	cout << "enter decimal number: ";
//	cin >> num;
//
//	stack s(32);
//
//	if (num <= 0) {
//		cout << "enter a positive number";
//	}
//	else {
//		s.decimaltobinary(num);
//	}
//	return 0;
//}