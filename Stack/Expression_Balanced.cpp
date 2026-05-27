#include <iostream>
#include <string>
using namespace std;
struct NODE{
    char data;
    NODE* next;
};
int empty(NODE* top){
     if(top==nullptr){
        return 1;
     }
     return 0;
}
NODE* push(NODE* top, char s){
    NODE* ptr=new NODE;
   ptr->next=top;
   ptr->data=s;
   top=ptr;
   return top;
}
NODE* pop(NODE* top){
    if(empty(top)){
      cout<<"Stack is empty"<<endl;
        return top;
    }
    NODE* ptr=top;
    top=top->next;
    delete ptr;
    return top;
}
int main() {
    NODE* top=nullptr;
    string data;
    cout<<"Enter Expression"<<endl;
    cin>>data;
    for(int exp:data){
        if(exp=='('||exp=='['||exp=='{'){
            top=push(top,exp);
        }
        if(exp==')'||exp==']'||exp=='}'){
           if(empty(top)){
            cout<<"Opening parenthesis are less"<<endl;
            return 1;
           }
           if(exp==')'&&top->data=='('||
            exp==']'&&top->data=='['||
            exp=='}'&&top->data=='{'){
                top=pop(top);
            }else{
                cout<<"Closing and Opeining parenthesis not mathch"<<endl;
                return 1;
            }
        }
    }
    if(!empty(top)){
        cout<<"Closing parenthesis are less"<<endl;
        return 1;
    }
    cout<<"Balanced Expression"<<endl;
    return 0;
}
