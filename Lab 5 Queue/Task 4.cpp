
#include <iostream>
using namespace std;

class TicketQueue
{
private:
    int arr[100];
    int front, rear;
public:
    TicketQueue()
    {
        front = 0;
        rear = -1;
    }
    void enqueue(int id)
    {
        if (rear == 99)
        {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (id < 1000 || id > 9999)
        {
            cout << "Enter a 4-digit ticket ID!" << endl;
            return;
        }
        rear++;
        arr[rear] = id;

        cout << "Ticket added successfully." << endl;
    }
    void dequeue()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Ticket " << arr[front]
             << " is resolved." << endl;
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
    void frontTicket()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty!" << endl;
        }
        else
        {
            cout << "Next ticket is: " << arr[front] << endl;
        }
    }
    void display()
    {
        if (rear == -1)
        {
            cout << "No pending tickets." << endl;
            return;
        }
        cout << "Pending Tickets: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    TicketQueue q;
    int choice, id;
    
    do
    {
        cout << "\n1. Add Ticket";
        cout << "\n2. Resolve Ticket";
        cout << "\n3. Check Next Ticket";
        cout << "\n4. Display Tickets";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Ticket ID: ";
            cin >> id;
            q.enqueue(id);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.frontTicket();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
