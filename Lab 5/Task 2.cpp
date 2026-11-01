
#include <iostream>
using namespace std;
class stack{
  private:
    int arr[100];
    int top;
    public:
    stack(){
        top=-1;
    }
    bool isempty(){
        return top == -1;
    }
    bool isfull(){
        return top == 99;
    }
void push(int value){
    if(isfull()){
        cout<<"stack is full";
        return;
    }
    top++;
    arr[top]=value;
}
    int pop(){
        if(isempty()){
            return -1;
        }
        int value=arr[top];
        top--;
        return value;
    }
    int peek(){
        if(isempty()){
            return -1;
        }
        return arr[top];
    }
    int getsize(){
        return top+1;
    }
    int getfromtop(int index){
        return arr[top-index];
    }
    int getfrombottom(int index){
        return arr[index];
    }  
};
class queue{
    private:
    stack s1;
    stack s2;

    void transfer(){
        while(!s1.isempty()){
            int value=s1.pop();
            s2.push(value);
        }
    }
public:
    void enqueue(int value){
        s1.push(value);
    }
    int dequeue(){
        if(s2.isempty()){
            transfer();
        }
        return s2.pop();
    }
    int frontelement(){
        if(s2.isempty()){
            transfer();
        }
        return s2.peek();
    }
    void display(){
        for(int i=0;i<s2.getsize();i++){
            cout<<s2.getfromtop(i)<<" ";
        }
        cout<<" "<<endl;
        for(int i=0;i<s1.getsize();i++){
            cout<<s1.getfrombottom(i)<<" ";
        }
        cout<<endl;
    }    
};

int main() {

    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    q.display();

    q.enqueue(40);

    q.display();
    
    return 0;
}