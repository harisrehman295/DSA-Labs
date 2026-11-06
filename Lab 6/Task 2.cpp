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

	void insertbeginning(int value) {
		node* newnode = new node(value);
		newnode->next = head;
		head = newnode;
	}

	void insertend(int value) {
		node* newnode = new node(value);
		if (head == NULL) {
			head = newnode;
			return;
		}
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}

	void deletevalue(int value) {
		if (head == NULL) {
			cout << "List is empty" << endl;
			return;
		}
		node* temp = head;
		if (head->data == value) {
			head = head->next;
			delete temp;
			return;
		}
		while (temp->next != NULL && temp->next->data != value) {
			temp = temp->next;
		}
		if (temp->next == NULL) {
			cout << "value not found";
		}
		else {
			node* del = temp->next;
			temp->next = temp->next->next;
			delete del;
		}
	}
	void display() {
		if (head == NULL) {
			cout << "List is empty" << endl;
			return;
		}
		node* temp = head;

		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << " Null " << endl;
	}
};

int main() {
	linkedlist list;

	list.insertbeginning(20);
	list.insertend(30);

	list.display();

	list.deletevalue(20);

	list.display();
}