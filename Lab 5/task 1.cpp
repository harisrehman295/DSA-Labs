
#include <iostream>
using namespace std;
template <typename T>
class abstractqueue {
public:
    virtual void enqueue(T value) = 0;
    virtual T dequeue() = 0;
    virtual T frontvalue() const = 0;
    virtual bool isempty() const = 0;
    virtual bool isfull() const = 0;

    virtual ~abstractqueue() {}
};
template <typename T>
class myqueue : public abstractqueue<T> {
    T* arr;
    int size;
    int front;
    int rear;

public:

    myqueue(int s) {
        size = s;
        front = 0;
        rear = -1;
        arr = new T[size];
    }

    bool isempty() const {
        return rear == -1;
    }

    bool isfull() const {
        return rear == size - 1;
    }

    // Insert element
    void enqueue(T value) {
        if (isfull()) {
            cout << "Queue is full" << endl;
        }
        else {
            rear++;
            arr[rear] = value;
            cout << "Value inserted" << endl;
        }
    }

    // Delete element
    T dequeue() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return T();
        }

        T value = arr[front];
        front++;

        if (front > rear) {
            front = 0;
            rear = -1;
        }

        return value;
    }

    // Show front element
    T frontvalue() const {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return T();
        }

        return arr[front];
    }

    // Display queue
    void display() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~myqueue() {
        delete[] arr;
    }
};

int main() {

    myqueue<int> q(5);

    int choice, value;

    do {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Front";
        cout << "\n4. Display";
        cout << "\n5. Check Empty";
        cout << "\n6. Check Full";
        cout << "\n7. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            cout << "Deleted: " << q.dequeue() << endl;
            break;

        case 3:
            cout << "Front: " << q.frontvalue() << endl;
            break;

        case 4:
            q.display();
            break;

        case 5:
            if (q.isempty())
                cout << "Queue is empty" << endl;
            else
                cout << "Queue is not empty" << endl;
            break;

        case 6:
            if (q.isfull())
                cout << "Queue is full" << endl;
            else
                cout << "Queue is not full" << endl;
            break;

        case 7:
            cout << "Program ended" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 7);

    return 0;
}