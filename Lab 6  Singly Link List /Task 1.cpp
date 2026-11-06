#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int value) {
		data = value;
		next = NULL;
	}
};
class linkedlist {
private:
	node* head;
public:
	linkedlist() {
		head = NULL;
	}
	void createnode(int value) {
		node* newnode = new node(value);

		if (head == NULL) {
			head = newnode;
		}
		else {
			node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newnode;
		}
	}
	void display() {
		if (head == NULL) {
			cout << "list is empty" << endl;
			return;
		}
		node* temp = head;

		while (temp != NULL) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
};
int main() {
	linkedlist list;

	list.createnode(10);
	list.createnode(20);
	list.createnode(30);

	list.display();
	return 0;
}



