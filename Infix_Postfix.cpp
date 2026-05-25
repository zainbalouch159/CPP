##include <iostream>
using namespace std;

int main() {
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
    return 0;
}