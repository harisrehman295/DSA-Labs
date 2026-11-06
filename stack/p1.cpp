////Stack Palindrome
//#include <iostream>
//#include <string>
//using namespace std;
//
//int getlength(string word) {
//	int length = 0;
//	while (word[length] != '\0') {
//		length++;
//	}
//	return length;
//}
//
//class stack {
//private:
//
//	char* arr;
//	int top;
//	int size;
//public:
//
//	stack(int s) {
//		size = s;
//		top = -1;
//		arr = new char[size];
//	}
//
//	void push(char value) {
//		if (top < size - 1) {
//			top++;
//			arr[top] = value;
//		}
//	}
//
//	char pop() {
//		if (top == -1) {
//			cout << "stack is empty" << endl;
//			return '\0';
//		}
//		char value = arr[top];
//		top--;
//		return value;
//	}
//
//	bool ispalindrome(string word) {
//		int length = getlength(word); //getting length of word
//
//		//pushing all char to stack
//		for (int i = 0; i < length; i++) {
//			push(word[i]);
//		}
//		//pop and compare char
//		for (int i = 0; i < length; i++) {
//			char ch = pop();
//			if (ch != word[i]) {
//				return false;
//			}
//		}
//		return true;
//	}
//
//	~stack() {
//		delete[] arr;
//	}
//};
//int main() {
//	string word;
//	cout << "enter a word: ";
//	cin >> word;
//
//	int length = getlength(word);
//
//	stack s(length);
//
//	if (s.ispalindrome(word)) {
//		cout << word << " is a palindrome";
//	}
//	else
//		cout << "not a palindrome";
//	return 0;
//}