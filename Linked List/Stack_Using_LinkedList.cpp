#include <iostream>
using namespace std;
struct NODE{
    int data;
    NODE *prev,*next;
};
int empty(NODE*top){
    if(top==nullptr){
        return 1;
    }
    return 0;
}
void show(NODE*top){
    if(empty(top)){
        cout<<"Stack is empty"<<endl;
        return;
    }
    NODE* ptr=top;
    while(ptr!=nullptr){
        cout<<ptr->data<<",";
        ptr=ptr->next;
    }
    cout<<endl;
}

NODE* push(NODE* top){
    NODE* ptr=new NODE;
    int value;
    cout<<"Enter value"<<endl;
    cin>>value;
   ptr->data=value;
   ptr->next=top;
   ptr->prev=nullptr;
    if(!empty(top)){
        top->prev=ptr;
    }
    top=ptr;
   return top;
}
NODE* pop(NODE* top){
    if(empty(top)){
        cout<<"Stack is already empty"<<endl;
        return top;
    }
    NODE* ptr=top;
    top=top->next;
    if(top!=nullptr){
    top->prev=nullptr;
    }
    delete ptr;
    return top;
}
void peek(NODE* top){
    if(empty(top)){
        cout<<"Stack is empty"<<endl;
        return;
    }
    int pos,i=1;
    NODE* ptr=top;
    cout<<"What position you want to peek"<<endl;
    cin>>pos;
    while(i<pos){
        ptr=ptr->next;
        i++;
    }
    cout<<i<<". "<<ptr->data<<endl;
}
int main() {
    NODE* top=nullptr;
        int choice;
        do{
            cout<<"1. Show\n"
                <<"2. Push\n"
                <<"3. Pop\n"
                <<"4. peek\n"
                <<"0. Exit"<<endl;
            cin>>choice;
switch (choice)
{
case 1:
    show(top);
    break;
case 2:
    top=push(top);
    break;
case 3:
    top=pop(top);
    break;
case 4:
    peek(top);
    break;
case 0:
    cout<<"Exit Successfully"<<endl;
    break;
default:
    cout<<"Invalid Input"<<endl;
    break;
}
        }while(choice!=0);
       
    return 0;
}
