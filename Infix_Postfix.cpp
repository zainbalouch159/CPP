#include <iostream>
#include <string>
using namespace std;
  struct NODE{
    char data;
    NODE* next;
};
NODE* top=nullptr;
string postfix;
int prec=0;
int top_prec=0;
int empty(){
     if(top==nullptr){
        return 1;
     }
     return 0;
}
int getPrecedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0; 
}
NODE* push(char s){
    NODE* ptr=new NODE;
   ptr->next=top;
   ptr->data=s;
   top=ptr;
   return top;
}
char pop(){
    if(empty()){
      
        return '\0';
    }
    NODE* ptr=top;
    char data=top->data;
    top=top->next;
    delete ptr;
    return data;
}
void check(char i){
     prec=getPrecedence(i);
    switch (i)
    {
       
    case '*':
    case '/':
       
       while(top_prec>=prec){
        postfix+=pop();
         if(!empty()) {
        top_prec = getPrecedence(top->data);
        }else{
            top_prec=0;
        }
       
       }
       if(prec>top_prec){
        top=push(i);
        top_prec=prec;
       }
        break;
    case '+':
    case '-':
       while(top_prec>=prec){
        postfix+=pop();
         if(!empty()) {
        top_prec = getPrecedence(top->data);
       }else{
        top_prec=0;
       }
      
       }
       if(prec>top_prec){
        top=push(i);
        top_prec=prec;
       }
        break;
    
    case '(':
    case '[':
    case '{':
        push(i);
        break;
    case ')':
    case ']':
    case '}':
       while(top->data!='('&&top->data!='['&&top->data!='{'){
        postfix+=pop();
       }
       pop();
       break;
    default:
    postfix+=i;
        break;
    }
   if (!empty()) {
    top_prec = getPrecedence(top->data);
} else {
    top_prec = 0;
}
}

string Infix_to_Postfix(string exp){
    
    for(char i:exp){
        check(i);
    }
    while(!empty()){
    postfix += pop();
}
}
int main() {
    string exp;
  cout<<"Enter expression"<<endl;
  cin>>exp;
Infix_to_Postfix(exp);
cout<<postfix;
    return 0;
}