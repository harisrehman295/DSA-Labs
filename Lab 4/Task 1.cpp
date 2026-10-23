#include <iostream>
#include <string>
using namespace std;
template<typename T>
class abstarctstack {
public:
	virtual void push(T value) = 0;
	virtual T pop() = 0;
	virtual T top() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool isFull() const = 0;

	virtual ~AbstractStack() {}
};
template <typename T> 
class mystack : public abstractstack<T> {
private:
	T* arr;
	int maxsize;
	int count;
public:
	mystack(int size) {
		maxsize = size;
		count = 0;
		arr = new int[maxsize];
	}
	~mystack() {
		delete[] arr;
	}
	void push(T value) {
		arr[count] = value;
		count++;
	}
	T pop() {
		count--;
		return arr[count];
	}
	T top() {
		return arr[count - 1];
	}
	bool isempty() {
		return count == 0;
	}
	bool isfull() {
		return count == maxsize;
	}
	void display() const {
		if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}
		for (int i = count - 1; i >= 0; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main() {
	int size;
	cout << "enter size: ";
	cin >> size;

    mystack<int> s(size);

    int choice, value;

    do {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Check if Empty" << endl;
        cout << "5. Check if Full" << endl;
        cout << "6. Display Stack" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            if (!s.isempty())
                cout << "Popped element: " << s.pop() << endl;
            else
                cout << "Stack is empty!" << endl;
            break;

        case 3:
            if (!s.isempty())
                cout << "Top element: " << s.top() << endl;
            else
                cout << "Stack is empty!" << endl;
            break;

        case 4:
            if (s.isempty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is not empty." << endl;
            break;

        case 5:
            if (s.isfull())
                cout << "Stack is full." << endl;
            else
                cout << "Stack is not full." << endl;
            break;

        case 6:
            s.display();
            break;
        case 7:
            cout << "Program ended." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);
    return 0;
}