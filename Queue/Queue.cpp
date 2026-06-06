#include <iostream>
using namespace std;
class NODE
{
public:
    int data; // It store actual data
    NODE *next; // next is used to go to next node
    NODE(int value) // Constructor that set value and next
    {
        data = value;
        next = nullptr;
    }
};

class Queue
{

public:
    int data;
    NODE *front = nullptr;
    NODE *rear = nullptr;
    void show()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        NODE *p = front;
        while (p != nullptr) // P is pointing to front it move to next and cout until it reach nullptr means at the end of Queue
        {
            cout << p->data << ",";
            p = p->next; // It help pointer to point to next node 
        }
        cout << endl;
        return;
    }
    void enqueue()
    {
        int value;
        cout << "Enter data" << endl;
        cin >> value;
        NODE *p = new NODE(value);//new node made with p name

        if (rear == nullptr)// checking that Queue is empty or not 
        {//If empty then that code execute 
            rear = front = p; // New node is front and rear 
            return; 
        }

        rear->next = p; // Make new node next of rear
        rear = p; // Then make new node rear of Queue
    }
    void dequeue(NODE *&front)
    {
        if (front == nullptr) // Checking Queue is empty or not
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        NODE *p = front; // Pointer that point at front
        front = front->next;    // Now Front next is Front
        if (front == nullptr) // If front next is nullptr
        {
            rear = nullptr; // Then rear shoud also be nullptr
        }
        delete p;   // Deleting p pointer that point to front indericlty deleting front
        cout << "Deleted from front successfully" << endl;
        return;
    }
    void peek()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        int pos = 0, i = 0;
        cout << "Enter position that you want to peek" << endl;
        cin >> pos;
        NODE *p = front; 
        while (i != pos) // Stop exactly at given position
        {
            i++;
            p = p->next; // Pointer p that is pointing to front is go next until reach given position
            if (p == nullptr)
            {
                cout << "That position don't exist" << endl;
                return;
            }
        }
        cout << i << ". " << p->data << endl;
    }
};
int main()
{
    Queue z;
    int choice;
    do
    {
        cout << "\n1. Show\n"
             << "2. Inqueue\n"
             << "3. Dequeue\n"
             << "4. peek\n"
             << "0. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            z.show();
            break;
        case 2:
            z.enqueue();
            break;
        case 3:
            z.dequeue(z.front);
            break;
        case 4:
            z.peek();
            break;
        case 0:
            cout << "Bye" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
