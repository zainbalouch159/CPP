#include <iostream>
using namespace std;
class NODE{
    public:
    int data;
    NODE* next;
    NODE(int val){
        data=val;
        next=nullptr;
    }
};

class Queue{
    int data;
    NODE* front=nullptr;
    NODE* rear=nullptr;
    public:
    void show(){
        if(front==nullptr){
            cout<<"Queue is empty"<<endl;
            return;
        }
        NODE* p=front;
        while(p!=nullptr){
            cout<<p->data<<",";
            p=p->next;
        }
        cout<<endl;
        return;
    }
    void enqueue(){
        int value;
        cout<<"Enter data"<<endl;
        cin>>value;
        NODE* p=new NODE(value);

        if(rear==nullptr){
            rear=front=p;
            front->next=rear;
            rear->next=p->next;
            return;
        }
        
        rear->next=p;
        rear=p;
        rear->data=p->data;
        rear->next=p->next;
    }
    void dequeue(){
        
    }
};
int main() {
    Queue z;
    z.enqueue();
    z.enqueue();
    z.enqueue();
    z.show();
    return 0;
}