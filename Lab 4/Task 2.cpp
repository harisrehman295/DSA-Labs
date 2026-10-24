
#include <iostream>
using namespace std;

template<typename T>
class abstractstack{
  public:
    virtual void push(T value)=0;
    virtual T pop()=0;
    virtual T top() const =0;
    virtual bool isempty() const=0;
    virtual bool isfull() const=0;
    virtual ~abstractstack() {}
    
};
template <typename T>
class mystack : public abstractstack<T>{
    private:
    T* arr;
    T* minarr;
    int maxsize, currentsize;
    public:
    mystack(int size){
        maxsize=size;
        currentsize=0;
        arr=new T[size];
        minarr=new T[size];
    }
    void push(T value){
        arr[currentsize]=value;

        if(currentsize==0 || value<minarr[currentsize-1])
            minarr[currentsize]=value;
        else
            minarr[currentsize]=minarr[currentsize-1];

        currentsize++;
    }
    T pop(){
        currentsize--;
        return arr[currentsize];
    }
    T top() const{
        return arr[currentsize-1];
    }
     bool isempty() const
    {
        return currentsize == 0;
    }

    bool isfull() const
    {
        return currentSize == maxsize;
    }
     T getmin() const
    {
        if (isempty())
            return T();

        return minArr[currentsize - 1];
    }
    void display() const
    {
        for (int i = currentsize - 1; i >= 0; i--)
            cout << arr[i] << endl;

        if (isempty())
            cout << "Stack is empty!\n";
    }
    ~mystack(){
        delete[] arr;
        delete[] minarr;
    }
};
int main(){
    int size,choice,value;
    cout<<"enter stack size:";
    cin>>size;
    if(size<=0)
        return 0;

    mystack<int> s(size);

     do
    {
        cout << "\n1. Push\n2. Pop\n3. Top\n4. Is Empty";
        cout << "\n5. Is Full\n6. Display\n7. Get Minimum\n8. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice){
            case 1:
            coout<<"enter value: ";
            cin>>value;
            s.push(value);
            break;

            case 2:
            if(!s.isempty())
                cout<<"popped: "<<s.pop()<<endl;
            else
                cout<<"stack is full";
            break; 
            case 3:
            if(!s.isempty())
                cout<<"top: "<<s.top()<<endl;
            else
                cout<<"stack is empty";
            break;
            
        }
        return 0;
}
