
#include <iostream>
using namespace std;

class PrintQueue
{
private:
    string arr[100];
    int front, rear;

public:

    // Constructor
    PrintQueue()
    {
        front = 0;
        rear = -1;
    }

    // Add a new document
    void enqueue(string name)
    {
        if (rear == 99)
        {
            cout << "Print Queue is Full!" << endl;
            return;
        }

        rear++;
        arr[rear] = name;

        cout << "Document added successfully." << endl;
    }

    // Print and remove the first document
    void dequeue()
    {
        if (rear == -1)
        {
            cout << "Print Queue is Empty!" << endl;
            return;
        }

        cout << "Printing document: " << arr[front] << endl;

        // Shift remaining documents to the left
        for (int i = front; i < rear; i++)
        {
            arr[i] = arr[i + 1];
        }

        rear--;

        if (rear == -1)
        {
            front = 0;
        }
    }

    // Show the next document
    void frontDocument()
    {
        if (rear == -1)
        {
            cout << "Print Queue is Empty!" << endl;
        }
        else
        {
            cout << "Next document: " << arr[front] << endl;
        }
    }

    // Display all pending documents
    void display()
    {
        if (rear == -1)
        {
            cout << "No documents in the queue." << endl;
            return;
        }

        cout << "Pending Documents:" << endl;

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    PrintQueue q;
    int choice;
    string name;

    do
    {
        cout << "\n===== Document Printing System =====";
        cout << "\n1. Add Document";
        cout << "\n2. Print Document";
        cout << "\n3. Check Next Document";
        cout << "\n4. Display Documents";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter document name: ";
            cin >> name;
            q.enqueue(name);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.frontDocument();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
