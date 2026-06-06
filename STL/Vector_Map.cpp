#include <iostream>
#include <map>
#include <vector>
using namespace std;
class student{
    map<string, vector<int> > marks;
    public:
    void input(){
        int student, subject,mark;
        string name;
        cout<<"How many students?"<<endl;
        cin>>student;
        cout<<"How many subjects?"<<endl;
        cin>>subject;
        for (int i = 0; i < student; i++)
        {
            cout<<i+1<<" Enter student name"<<endl;
            cin>>name;
            for (int j = 0; j < subject; j++)
            {
                cout<<"Enter marks of "<<name<<" of "<<j+1<<" subject"<<endl;
                cin>>mark;
                marks[name].push_back(mark);
            }
            
        }
        
    }
    void show(){
        for (int i = 0; i < map; i++)
        {
            /* code */
        }
        
    }
};
int main(){
student a;
a.input();
return 0;
}

