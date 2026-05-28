#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpt(stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(stack *ptr){
    if(ptr->size-1==ptr->top){
        return 1;
    }
    return 0;
}
void push(stack *ptr){
    if(isFull(ptr)){
        cout<<"Your stack is full"<<endl;
    }
    else{
        int value;
        cout<<"Enter value"<<endl;
        cin>>value;
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(stack *ptr){
    if(isEmpt(ptr)){
        cout<<"Your stack is empty"<<endl;
        return -1;
    }
      int value =ptr->arr[ptr->top];
      ptr->top--;
        return value;
}
void show(stack *ptr){
    
    if(isEmpt(ptr)){
        cout<<"Array is empty"<<endl;
        return;
    }
    int i=ptr->top,s=1;
    do{
        cout<<s<<". "<<ptr->arr[i]<<endl;
        s++;
        i--;
    }while(i>-1);
    cout<<endl;
}
void Peek(stack *ptr){
    if(isEmpt(ptr)){
        cout<<"Stack is Empty"<<endl;
        return;
    }
    int value;
    cout<<"Which position you want to peek"<<endl;
    cin>>value;
    cout<<value<<". "<<ptr->arr[ptr->top-value+1]<<endl;
}
int main(){
stack *s=new stack;
s->top=-1;
 cout<<"Enter array size"<<endl;
    cin>>s->size;
    s->arr=new int[s->size];
int choice;
do{
   
    cout<<"1. Push\n"
        <<"2. Pop\n"
        <<"3. Show\n"
        <<"4. Peek\n"
        <<"0. Exit"<<endl;
        cin>>choice;
switch (choice)
{
case 1:
    push(s);
    break;
case 2:
    pop(s);
    break;
case 3:
    show(s);
    break;
case 4:
    Peek(s);
    break;
case 0:
    cout<<"Exit successfully"<<endl;
    break;
default:
    cout<<"Invalid Input"<<endl;
    break;
}
}while(choice!=0);
    return 1;
}
