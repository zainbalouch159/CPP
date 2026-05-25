#include <iostream>
using namespace std;
struct NODE{
    int data;
    struct NODE *next;
};
void linkedListTraversal(struct NODE*ptr){
    while(ptr!=NULL){
    cout<<"Element: "<<ptr->data<<endl;
    
    ptr=ptr->next;
    }
}
int main() {
    NODE *head=new NODE();
    NODE *second=new NODE();
    NODE *third=new NODE();
    NODE *fourth=new NODE();
    NODE *fifth=new NODE();
    head->data=7;
    head->next=second;
    second->data=89;
    second->next=third;
    third->data=23;
    third->next=fourth;
    fourth->data=25;
    fourth->next=fifth;
    fifth->data=26;
    fifth->next=NULL;
    linkedListTraversal(head);
    return 0;
}