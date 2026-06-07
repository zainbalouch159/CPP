#include <iostream>
#include <vector>
using namespace std;
void Selection(vector<int> &a) // Use & because I want changes happen in real vector & don't want copy
{
    if (a.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }
    for(int i=0;i<a.size()-1;i++){
        int min=i;
        int j=i+1;
        while(j<a.size()){
            if(a[j]<a[min]){
                min=j;
            }
            j++;
        }
        swap(a[min],a[i]);
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
            Selection(a);
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