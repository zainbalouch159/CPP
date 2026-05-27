#include <iostream>
using namespace std;
struct NODE{
    int data;
    struct NODE *next;
};
void Show(struct NODE* head){
    NODE* p=head;
    int roll=0;
    do{
        
        cout<<"Index "<<roll<<" = "<<p->data<<endl;
        p=p->next;
        roll++;
}while(p!=head);
cout<<endl;
}

NODE* Insert(NODE* head){
    int index,data,i=0,count=0;
    NODE* ptr=head;
     NODE* s=new NODE;
        NODE* t=head;
        do{
        count++;
        ptr=ptr->next;
}while(ptr->next!=head);
    cout<<"In which index you want to enter value(0-"<<count<<")"<<endl;
    cin>>index;
    if(index>count||index<0){
        cout<<"That index don't exist"<<endl;
        return head;
    }
    cout<<"What value you want to enter"<<endl;
    cin>>data;
    if(index==count){
    ptr->next=s;
    s->next=head;
    s->data=data;
    return head;
    }
    if(index==0){
    ptr->next=s;
    s->next=head;
    s->data=data;
    head=s;
    return head;

    }
    while(i<index-1){
        t=t->next;
        i++;
    }
    s->next=t->next;
    t->next=s;
    s->data=data;
    return head;
}
NODE* DeleteIndex(NODE* head){
    NODE* q=head;
    NODE* p=head;
    NODE* t=head;
    int index,i=0,count=0;
      while(t->next!=head){
        t=t->next;
        count++;
}
    cout<<"What index you want to delete (0-"<<count<<")"<<endl;
    cin>>index;
    if(index>count|| index<0){
        cout<<"Please choose between 0 & "<<count<<endl;
        return head;
    }
    if(index==0){
       head=head->next;
       t->next=head;
        delete q;
        return head;
    }
    if(index==count){
    while(i<index-1){
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=head;
    delete q;
    return head;}
     while(i<index-1){
        p=p->next;
        i++;
    }
     q=p->next;
    p->next=q->next;
    delete q;
    return head;
}
NODE* DeleteValue(NODE* head){
    int value;
    NODE* p=head,*ptr=head->next, *q=head;
    while(q->next!=head){
        q=q->next;
    }
    cout<<"Enter value that you want to delete"<<endl;
    cin>>value;
    if(q->data==value){
        while(ptr->next!=q){
            ptr=ptr->next;
        }
        ptr->next=q->next;
        delete q;
        return head;
    }
    if(p->data==value){
        q->next=p->next;
        head=q->next;
        delete p; 
        return head;
    }
    do{
        if(ptr->data==value){
            p->next=ptr->next;
            delete ptr;
            return head;
        }
         ptr=ptr->next;
    }while(ptr->data!=value&&ptr->next!=head);
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
    head->next=second;
    second->data=89;
    second->next=third;
    third->data=23;
    third->next=fourth;
    fourth->data=25;
    fourth->next=fifth;
    fifth->data=26;
    fifth->next=head;
    int choice;
    do{
        cout<<"\n1. Show\n"
            <<"2. Insert\n"
            <<"3. Delete by roll no\n"
            <<"4. Delete by marks\n"
            <<"0. Exit"<<endl;
        cin>>choice;
    switch (choice){
        case 1:
        Show(head);
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
        cout<<"Exit Porgram"<<endl;
        break;
        default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    }while(choice!=0);
    cout<<"<---------------->"<<endl;
    return 0;
}
