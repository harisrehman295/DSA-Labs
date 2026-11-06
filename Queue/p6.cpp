//#include <iostream>
//#include <string>
//using namespace std;
//
//class Queue {
//private:
//    int* customerIDs;
//    string* customerNames;
//    int front;
//    int rear;
//    int maxSize;
//
//public:
//    Queue(int size) {
//        maxSize = size;
//        front = 0;
//        rear = -1;
//
//        customerIDs = new int[maxSize];
//        customerNames = new string[maxSize];
//    }
//    bool isEmpty() {
//        return front > rear;
//    }
//    bool isFull() {
//        return rear == maxSize - 1;
//    }
//    void addCustomer(int id, string name) {
//        if (isFull()) {
//            cout << "Queue is full!" << endl;
//            return;
//        }
//        rear++;
//        customerIDs[rear] = id;
//        customerNames[rear] = name;
//        cout << "Customer added successfully." << endl;
//    }
//    void serveCustomer() {
//        if (isEmpty()) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//
//        cout << "Serving Customer:" << endl;
//
//        cout << "Customer ID: "
//            << customerIDs[front] << endl;
//
//        cout << "Customer Name: "
//            << customerNames[front] << endl;
//
//        front++;
//
//        if (front > rear) {
//            front = 0;
//            rear = -1;
//        }
//    }
//    void displayCustomers() {
//        if (isEmpty()) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//
//        cout << "Waiting Customers:" << endl;
//
//        for (int i = front; i <= rear; i++) {
//
//            cout << "Customer ID: "
//                << customerIDs[i] << endl;
//
//            cout << "Customer Name: "
//                << customerNames[i] << endl;
//        }
//    }
//    int countCustomers() {
//        if (isEmpty()) {
//            return 0;
//        }
//
//        return rear - front + 1;
//    }
//    ~Queue() {
//        delete[] customerIDs;
//        delete[] customerNames;
//    }
//};
//
//int main() {
//
//    Queue q(5);
//
//    int choice;
//    int id;
//    string name;
//
//    do {
//        cout << "1. Add Customer" << endl;
//        cout << "2. Serve Customer" << endl;
//        cout << "3. Display Waiting Customers" << endl;
//        cout << "4. Display Number of Waiting Customers" << endl;
//        cout << "5. Exit" << endl;
//
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (cin.fail()) {
//            cin.clear();
//            cin.ignore(1000, '\n');
//            cout << "Invalid input!" << endl;
//            continue;
//        }
//        switch (choice) {
//
//        case 1:
//            cout << "Enter Customer ID: ";
//            cin >> id;
//
//            cout << "Enter Customer Name: ";
//            cin.ignore();
//            getline(cin, name);
//
//            q.addCustomer(id, name);
//            break;
//
//        case 2:
//            q.serveCustomer();
//            break;
//
//        case 3:
//            q.displayCustomers();
//            break;
//
//        case 4:
//            cout << "Total Waiting Customers: "
//                << q.countCustomers() << endl;
//            break;
//
//        case 5:
//            cout << "Program ended." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}