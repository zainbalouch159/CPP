#include <iostream>
#include <vector>
using namespace std;
void Bubble(vector<int> &a)
{
    if (a.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }
    bool swapped;
    for (int i = 0; i < a.size() - 1; i++) //  maximum passes needed are size-1
    {
        swapped = false;
        for (int j = 0; j < a.size() - 1 - i; j++)
        { // -i because program don't waste time on already sorted data
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        { // if no swap happened, vector is already sorted
            return;
        }
    }
}
void display(vector<int> &a)
{
    if (a.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }

    for (auto x : a)
    {
        cout << a[i] << ",";
    }
}

void Input(vector<int> &a)
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    a.push_back(data);
}
int main()
{
    vector<int> a;
    int choice;
    do
    {
        cout << "\n 1. Show \n"
             << " 2. Input \n"
             << " 3. Bubble Sort\n"
             << " 0. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            display(a);
            break;

        case 2:
            Input(a);
            break;

        case 3:
            Bubble(a);
            break;
        case 0:
            cout << "Exit successfully" << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
        }

    } while (choice != 0);
}