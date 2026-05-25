#include <iostream>
using namespace std;
struct NODE{
    int data;
    struct NODE *next;
};
void linkedListTraversal(struct NODE*ptr){
    if(ptr==nullptr){
        cout<<"Nodes are empty"<<endl; 
        return;
    }
    while(ptr!=nullptr){
    cout<<"Element: "<<ptr->data<<endl;
    
    ptr=ptr->next;
    }
}
struct NODE* insertAtFirst(NODE* head){
    int data;
    cout<<"Enter data that you want to enter at first node"<<endl;
    cin>>data;
    struct NODE* ptr=new struct NODE;
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
void InsertInBetween(NODE* head){
    int index, data;
    struct NODE* ptr= new struct NODE;
    struct NODE* p=head;
    struct NODE* q=head;
    int i=0;
     cout<<"In which index you want to enter data?"<<endl;
    cin>>index;
    if(index<1){
        cout<<"Index should be greater or equal to 1"<<endl;
        return;
    }
    int count=0;
    while(q->next!=nullptr){
        q=q->next;
        count++;
    }
    if(index>count){
        cout<<"That index don't exist"<<endl;
        return;
    }
    cout<<"What data you want to enter?"<<endl;
    cin>>data;
    
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
}
    void InsertAtEnd(struct NODE* head){
        int data;
        cout<<"Enter data that you want to enter at the end of index"<<endl;
        cin>>data;
        struct NODE* ptr=new struct NODE;
        struct NODE* p=head;
        while(p->next!=nullptr){
            p=p->next;
        }
        p->next=ptr;
        ptr->next=nullptr;
        ptr->data=data;
    }
    struct NODE* DeleteFirst(struct NODE* head){
        if(head==nullptr){
        cout<<"Nodes are deleted"<<endl; 
        return nullptr;
    }
        struct NODE* p=head;
        head=p->next;
        delete p;
        return head;
    }
    void deleteNodeBetween(struct NODE* head){
        int index;
        cout<<"In which index you want to delete data"<<endl;
        cin>>index;
        struct NODE* p=head;
        int i=0;
        while(i!=index-1){
            p=p->next;
            i++;
        }
       struct NODE* q=p->next;
        p->next=q->next;
        delete q;
    }
    NODE* DeleteNodeValue(struct NODE* head){
        int value;
        cout<<"\nEnter value that you want to delete"<<endl;
        cin>>value;
        struct NODE* p=head;
        struct NODE* q=head;
        int count=0,i=0;
        while(p!=nullptr && p->data==value){
            head=p->next;
            delete p;
            return head;
        }
        while(p!=nullptr && p->data!=value){
            q=p;
            p=p->next;
            count++;
        }
        if(p==nullptr){
            cout<<"\nValue don't exist"<<endl;
            return head;
        }
        q->next=p->next;
        delete p;
        return head;
    }
    void DeleteAtEnd(NODE* head){
        NODE* p=head;
        while(p->next!=nullptr){
            p=p->next;
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
    fifth->next=nullptr;
    // head = insertAtFirst(head,829);
    // InsertInBetween(third, 892);
    // InsertInBetween(fifth,8921);
    // InsertInBetween(head, 89212);
    int choice;
    do{
        cout<<"\n1. Insert data\n"
            <<"2. Show data\n"
            <<"3. Insert data at end\n"
            <<"4. Delete first\n"
            <<"5. Insert at first\n"
            <<"6. Delete node\n"
            <<"7. Delete with value\n"
            <<"0. Exit\n"<<endl;
            cin>>choice;
        switch (choice)
        {
        case 1:
            InsertInBetween(head);
            break;
        case 2:
            linkedListTraversal(head);
            break;
        case 3:
            InsertAtEnd(head);
            break;
            case 4:
            head=DeleteFirst(head);
            break;
            case 5:
            head=insertAtFirst(head);
            break;
            case 6:
            deleteNodeBetween(head);
            break;
            case 7:
            head=DeleteNodeValue(head);
            break;
            case 0:
            cout<<"\nSee you later!"<<endl;
            break;
        default:
        cout<<"Invalid Input!"<<endl;
            break;
        }
    }while(choice!=0);
    cout<<"Program exit successfully"<<endl;
    return 0;
}
