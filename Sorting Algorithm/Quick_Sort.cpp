#include <iostream>
#include <vector>
using namespace std;
void Quick(vector<int> &a) // Use & because I want changes happen in real vector & don't want copy
{
    if (a.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }
    for(int p=0; p<a.size()-1;p++){
        int pivot=a[p];
        int i=p+1;
        int j=a.size()-1;
        while(i < a.size() ){
            
            while(j>p){
                
                if(j<i){
                    swap(a[p],a[j]);
                    break;
                }
                else if(a[i]>a[j]){
                    swap(a[i],a[j]);
                }
                
                j--;
                i++;
                }
                
            }
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
            Quick(a);
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