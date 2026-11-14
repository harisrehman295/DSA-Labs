
#include <iostream>
#include <string>
using namespace std;

class node{
  public:
    string data;
    node* next;
    node(string name){
        data=name;
        next=NULL;
    }
};
class linkedlist{
  private:
    node *head;
    public:
    linkedlist(){
        head=NULL;
    }
    void addpatient(string name){
        node* newnode = new node(name);

        if(head==NULL){
            head=newnode;
        }
        else{
            node * temp = head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    void removepatient(string name){
        if(head==NULL){
            cout<<"queue is empty"<<endl;
            return ;
        }
         if(head->data == name){
             node* temp = head;
             head=head->next;
             delete temp;
             return;
         }
        node *temp = head;
        while(temp->next != NULL && temp->next->data !=name){
            temp=temp->next;
        }
        if(temp->next==NULL){
            cout<<"patient not found"<<endl;
            return ;
        }
        node* del = temp->next;
        temp->next=del->next;
        delete del;
    }
    void display(){
        if(head==NULL){
            cout<<"empty"<<endl;
            return ;
        }
        node * temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"Null"<<endl;
    }
    void countpatients(){
        int count=0;
        node * temp=head;
        while(temp !=NULL){
            count++;
            temp=temp->next;
        }
        cout<<"Total patients: "<<count<<endl;
    }
};
int main() {

    linkedlist hospital;

    hospital.addpatient("ali");
    hospital.addpatient("haris");
    hospital.addpatient("Babar");

    hospital.display();

    hospital.countpatients();

    hospital.removepatient("haris");

    hospital.display();

    hospital.countpatients();
    return 0;
}