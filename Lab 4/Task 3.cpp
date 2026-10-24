#include <iostream>
using namespace std;
class mycarstack{
    private:
    int *arr;
    int maxsize;
    int currentsize;
    public:
    mycarstack(int size=8){
        maxsize=size;
        currentsize=0;
        arr=new int[maxsize];
    }
    bool isempty() const {
        return currentsize==0;
    }
    bool isfull() const{
        return currentsize==maxsize;
    }
    void push(int car){
        if(isfull()){
            cout << "Parking lot is full.";
            return;
        }
        arr[currsentsize]=car;
        currentsize++;
    }
    int pop(){
        if(isempty()){
            cout<<"full parking."<<endl;
            return -1;
        }
        currentsize--;
        return arr[currentsize];
    }
    int top() const{
        if(isempty())
            return -1;
        return arr[currentsize-1];
    }
    int totalcars() const{
        return currentsizel
    }
    void display() const{
        for (inti=currentsize-1;i>=0;i--)
            cout<<arr[i]<<endl;
    }
   bool search(int car) const{
       for(int i=0;i<currentsize;i++){
           if(arr[i]==car)
               return true;
       }
       return false;
   }
    void removecar(int car){
        mycarstack temp(maxsize);
        while(top()!=car)
            temp.push(pop());
        pop();
        cout<<"car"<<car<<"removed"<<endl;

        while(!temp.isempty())
            push(temp.pop());
    }
    ~mycarstack(){
        delete[] arr;
    }
};
int main(){

    remove 0;
}