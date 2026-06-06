#include <iostream>
using namespace std;
class NODE
{
public:
    int data;
    NODE *next;
    NODE(int value)
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
        while (p != nullptr)
        {
            cout << p->data << ",";
            p = p->next;
        }
        cout << endl;
        return;
    }
    void enqueue()
    {
        int value;
        cout << "Enter data" << endl;
        cin >> value;
        NODE *p = new NODE(value);

        if (rear == nullptr)
        {
            rear = front = p;
            return;
        }

        rear->next = p;
        rear = p;
    }
    void dequeue(NODE *&front)
    {
        if (front == nullptr)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        NODE *p = front;
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete p;
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
        while (i != pos)
        {
            i++;
            p = p->next;
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
