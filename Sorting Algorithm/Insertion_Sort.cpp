#include <iostream>
#include <vector>
using namespace std;
void Insertion(vector<int> &a) // Use & because I want changes happen in real vector & don't want copy
{
    if (a.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }
    for(int i=1;i<a.size();i++){ //start from 1 because in insertion we compare right data to left sorted data
        int temp = a[i]; // save a[i] data in temp because shifting overwrites data
           int j=i-1; // j one step back because it help us to compare our data to left sorted part
            while(j>=0&&a[j]>temp){ // There we check that data is greater then left sorted part and j should remain a valid index
                a[j+1]=a[j]; // If left part is greater then our data then we shift it to right 
                j--; // Move j left to check left part 
            }
            a[j+1] = temp; // Insert our data in it right position and we use j+1 because our j move one step back because of j--
        }
        
    }

void display(vector<int> &a) // Use & becuase I don't want copy to waste space
{
    if (a.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }
    
    for (auto x : a)
    {
        cout << x << ",";
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
             << " 3. Insertioin Sort\n"
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
            Insertion(a);
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