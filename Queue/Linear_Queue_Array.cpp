#include <iostream>
using namespace std;
class Queue{
    int front=-1,rear=-1,size=10;
    int arr[10];
    public:
    bool full(){
        if(rear==size-1){
            return 1;
        }
        return 0;
    }
    bool empty(){
        if(front==-1){
            return 1;
        }
        return 0;
    }
    void show(){
        if(empty()){
            cout<<"Array is empty"<<endl;
            return;
        }
        int i=front;
        do{
            cout<<arr[i]<<",";
            i++;
        }while(i!=rear+1);
        cout<<endl;
    }
    void Enqueue(){
        if(full()){
            cout<<"Array is full"<<endl;
            return;
        }
        int data;
        cout<<"Ente data"<<endl;
        cin>>data;
        if(empty()){ // if array is emtpty
            front++;
            arr[front]=data; 
            rear++;
            return;
        }
        rear++;
        arr[rear]=data;
        return;
    }
    void Dequeue(){
        if(empty()){
            cout<<"Array is empty"<<endl;
            return;
        }
        front++;
        cout<<"Deleted Successfully"<<endl;
        if(front>rear){
            cout<<"Array underflow"<<endl;
            front=-1;
            rear=-1;
        }
        return;
    }
};
int main() {
    Queue z;
    int choice;
   do{
    cout<<"\n 1. Show\n"
        <<" 2. Enqueue\n"
        <<" 3. Dequeue\n"
        <<" 0. Exit"<<endl;
        cin>>choice;
    switch (choice)
    {
    case 1:
        z.show();
        break;
    case 2:
        z.Enqueue();
        break;
    case 3:
        z.Dequeue();
        break;
    case 0:
        cout<<"Exit successfully"<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
   }while(choice!=0);
   return 0;
    
}