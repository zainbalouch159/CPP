#include <iostream>
using namespace std;
class Queue{
    int front=-1,rear=-1,size=5;
    int arr[5];
    public:
    bool full(){
        if((rear+1)%size==front){
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
           i=(i+1)%size;
        }while(i!=(rear+1)%size); // Move forward until reach rear next
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
        rear=(rear+1)%size; // Rear move forward in circular 
        
        arr[rear]=data;
        return;
    }
    void Dequeue(){
        if(empty()){
            cout<<"Array is empty"<<endl;
            return;
        }
        if(rear==front){ // Single element check and reset 
            reset();
        }else{
        front=(front+1)%size; // Move forward 
        }
        
        cout<<"Deleted Successfully"<<endl;
        return;
    }
    void reset(){
        front=-1;
        rear=-1;
    }
};
int main() {
    Queue z;
    int choice;
   do{
    cout<<"\n 1. Show\n"
        <<" 2. Enqueue\n"
        <<" 3. Dequeue\n"
        <<" 4. Reset\n"
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
    case 4:
        z.reset();
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