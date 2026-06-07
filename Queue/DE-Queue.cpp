#include <iostream>
using namespace std;
class Queue
{
    int front = -1, rear = -1, size = 10;
    int arr[10];

public:
    bool full()
    {         
        if (rear == size - 1)
        {
            return 1;
        }
        return 0;
    }
    bool empty()
    {
        if (front == -1)
        {
            return 1;
        }
        return 0;
    }
    void show()
    {
        if (empty())
        {
            cout << "Array is empty" << endl;
            return;
        }
        int i = front;
        do
        {
            cout << arr[i] << ",";
            i++;
        } while (i != rear + 1);
        cout << endl;
    }
    void EnqueueR() // Enter data from rear
    {
        if (full())
        {
            cout << "Array is full" << endl;
            return;
        }
        int data;
        cout << "Ente data" << endl;
        cin >> data;
        if (empty())
        { // if array is emtpty
            front++;
            arr[front] = data;
            rear++;
            return;
        }
        rear++;
        arr[rear] = data;
        return;
    }
    void EnqueueF() // Enter data from front
    {
        if (front == 0)  // If front is at first index
        {
            cout << "No space in front" << endl;
            return;
        }
        int data;
        cout << "Enter data" << endl;
        cin >> data;
        if (empty())
        { // if array is emtpty
            front++;
            arr[front] = data;
            rear++;
            return;
        }
        front--;// test
        arr[front] = data;
    }
    void DequeueF() // Delete data from front
    {
        if (empty())
        {
            cout << "Array is empty" << endl;
            return;
        }
        front++;
        cout << "Deleted Successfully" << endl;
        if (front > rear)
        {
            cout << "Array underflow" << endl;
            front = -1;
            rear = -1;
        }
        return;
    }
    void DequeueR(){ // Delete data from rear
        if(empty()){
            cout<<"Array is empty"<<endl;
            return;
        }
        rear--;
        cout<<"Deleted successfully"<<endl;
        if (front > rear)
        {
            cout << "Array underflow" << endl;
            front = -1;
            rear = -1;
        }
        return;
    }
};
int main()
{
    Queue z;
    int choice;
    do
    {
        cout << "\n 1. Show\n"
             <<" 2. EnqueueR\n"
             <<" 3. EnqueueF\n"
             <<" 4. DequeueF\n"
             <<" 5. DequeueR\n"
             <<" 0. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            z.show();
            break;
        case 2:
            z.EnqueueR();
            break;
        case 3:
            z.EnqueueF();
            break;
        case 4:
            z.DequeueF();
            break;
        case 5:
            z.DequeueR();
            break;
        case 0:
            cout << "Exit successfully" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}