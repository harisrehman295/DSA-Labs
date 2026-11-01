
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
    void push(int value){
        if(top==99){
            cout<<"full";
            return ;
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
};

class queue{
  private:
    int arr[100];
    int frontindex;
    int rearindex;
    int count;
    public:
    queue(){
        frontindex=0;
        rearindex=-1;
        count=0;
    }
    bool isempty(){
        return count==0;
    }
    void enqueue(int value){
         if (count == 100) {
            cout << "Queue is Full" << endl;
            return;
    }
        rearindex=(rearindex+1)%100;
        arr[rearindex]=value;
        count++;
    }
    int dequeue(){
        if(isempty()){
            return -1;
        }
        int value=arr[frontindex];
        frontindex=(frontindex+1)%100;
        count--;
        return value;
    }
    int front(){
        return arr[frontindex];
    }
    int size(){
        return count;
    }
    void reversefirstk(int k){
        if(k>count){
            k=count;
        }
        if(k<=1){
            return;
        }
        stack s;
        for(int i=0;i<k;i++){
            int value=dequeue();
            s.push(value);
        }
        while(!s.isempty()){
            int value=s.pop();
            enqueue(value);
        }
         int remaining = count - k;

        for (int i = 0; i < remaining; i++) {

            int value = dequeue();

            enqueue(value);
        }
    }
};

int main() {
    queue q;
    int n,value,k;
    return 0;
}