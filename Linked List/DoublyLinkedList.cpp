#include <iostream>
using namespace std;
struct NODE{
    int data;
    struct NODE *next,*prev;
};
int totalIndex;
void show(NODE* head){
    NODE* p=head;
    totalIndex=0;
    do{
        cout<<"Index "<<totalIndex<<" = "<<p->data<<endl;
        p=p->next;
        totalIndex++;
    }while(p!=head);
}
NODE* Insert(NODE* head){
    int index=0,data=0,i=0,count=0;
    NODE* ptr=new NODE;
    NODE* p=head,*q=head,*s;
    while(p->next!=head){
        p=p->next;
        count++;
    }
    cout<<"In which index you want to enter data"<<endl;
    cin>>index;
    if(index<0||index>totalIndex){
        cout<<"That index don't exist"<<endl;
        return head;
    }
    cout<<"What data you want to enter"<<endl;
    cin>>data;
    if(index==0){
        head->prev=ptr;
        p->next=ptr;
        ptr->prev=p;
        ptr->next=head;
        ptr->data=data;
        head=ptr;
        return head;
    }
    if(index==count){
        p->next=ptr;
        ptr->prev=p;
        ptr->next=head;
        head->prev=ptr;
        ptr->data=data;
        return head;
    }
    while(i<index){
        q=q->next;
        i++;
    }
    ptr->prev=q->prev;
    s=q->prev;
    s->next=ptr;
    q->prev=ptr;
    ptr->next=q;
    ptr->data=data;
    return head;
}
NODE* DeleteIndex(NODE* head){
    NODE* p=head,*q=head,*ptr=head;
    
    int index, count=0,i=0;
    while(p->next!=head){
        p=p->next;
        count++;
    }
    cout<<"Which index you want to delete"<<endl;
    cin>>index;
    if(index<0||index>count){
        cout<<"That index not exist"<<endl;
        return head;
    }
    if(index==0){
        ptr=head->next;
        p->next=head->next;
        ptr->prev=p;
        head=ptr;
        delete q;
        return head;
    }
    if(index==count){
        ptr=p->prev;
        ptr->next=head;
        head->prev=ptr;
        delete p;
        return head;
    }
    while(i!=index){
        i++;
        q=q->next;
    }
    NODE* s;
    ptr=q->prev;
    ptr->next=q->next;
    s=ptr->next;
    s->prev=ptr;
    delete q;
    return head;
}
NODE* DeleteValue(NODE* head){
    NODE* p=head,*q,*t=head->prev;;
    int value;
    cout<<"Enter value that you want to delete"<<endl;
    cin>>value;
    if(t->data==value){
        p=t->prev;
        p->next=head;
        head->prev=p;
        delete t;
        return head;
    }
    if(head->data==value){
        NODE* s=head;
        q=head->prev;
        q->next=head->next;
        p=head->next;
        p->prev=q;
        head=p;
        delete s;
        return head;
    }
    while(p->data!=value&&p->next!=head){
        p=p->next;  
        if(p->data==value){
            NODE* ptr;
        q=p->prev;
        q->next=p->next;
        ptr=q->next;
        ptr->prev=q;
        delete p;
        return head;
        }
    }
     cout<<"That value don't exist"<<endl;
     return head;
}
int main() {
      NODE *head=new NODE();
    NODE *second=new NODE();
    NODE *third=new NODE();
    NODE *fourth=new NODE();
    NODE *fifth=new NODE();
    head->data=7;
    head->prev=fifth;
    head->next=second;
    second->data=89;
    second->prev=head;
    second->next=third;
    third->data=23;
    third->prev=second;
    third->next=fourth;
    fourth->data=25;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->data=26;
    fifth->prev=fourth;
    fifth->next=head;
    int choice;
    do{
        cout<<"1. Show\n"
            <<"2. Insert\n"
            <<"3. Delete by index\n"
            <<"4. Delete by value\n"
            <<"0. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            show(head);
            break;
            case 2:
            head=Insert(head);
            break;
            case 3:
            head=DeleteIndex(head); 
            break;
            case 4:
            head=DeleteValue(head);
            break;
            case 0:
            cout<<"    Exit program"<<endl;
            break;
            default:
            cout<<"Invalid Input"<<endl;
            break;
        }
    }while(choice!=0);
        cout<<"<------------------->"<<endl;
    return 0;
}
