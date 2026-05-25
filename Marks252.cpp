#include <iostream>
#include<vector>
#include<fstream>
using namespace std;
class Student{
    public:
    int  roll;
    string name;
    float gpa, percentage,marks, total_marks=100;
    string grade;
    void input(){
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter roll no"<<endl;
        cin>>roll;
        cout<<"Enter marks"<<endl;
        cin>>marks;
        percentage=marks/total_marks*100.0;
        if (marks>=85 && marks<=100)
        {
            gpa=4;
            grade="A";
        }
        else if(marks>=80 && marks<=84){
            gpa=3.75;
            grade="A-";
        }
        else if(marks>=75 && marks<=79){
            gpa=3.5;
            grade="B+";
        }
         else if(marks>=70 && marks<=74){
            gpa=3;
            grade="B";
        }
         else if(marks>=65 && marks<=69){
            gpa=2.5;
            grade="C+";
        }
         else if(marks>=60 && marks<=64){
            gpa=2;
            grade="C";
         }
             else if(marks>=55 && marks<=59){
            gpa=1.5;
            grade="D+";
        }
         else if(marks>=50 && marks<=54){
            gpa=1;
            grade="D";
        }
        else if(marks<50){
            gpa=0;
            grade="F";
        }
        }
        
    void show(){
        cout<<"\n<-------------------------------->\n"
            <<name<<" "<<roll<<endl
            <<"Marks: "<<marks<<endl
            <<"CGPA: "<<gpa<<endl
            <<"Percentage: "<<percentage<<endl
            <<"Grade: "<<grade<<endl
            <<"\n<-------------------------------->\n";
    }
    void SaveToFile(){
        ofstream file("students.text", ios::app);
        file<<name<<" | "
            <<roll<<" | "
            <<gpa<<" | "
            <<percentage<<"% | "
            <<marks<<" | "
            <<grade<<endl;
            file.close();
    }
    void ReadFromFile(){
        fstream file("students.text");
        string line;
while(getline(file, line)){
    cout<<"\n<-------------------------------->\n"
        <<line
        <<"\n<-------------------------------->\n";

            //  cout
            // <<name<<" "<<roll<<endl
            // <<"Marks: "<<marks<<endl
            // <<"CGPA: "<<gpa<<endl
            // <<"Percentage: "<<percentage<<endl
            // <<"Grade: "<<grade<<endl
            // 
           
        }
         file.close();
    }
};
int main() {
     vector<Student> students;
     int choice;
    do{
        cout<<"\n<------------------------>\n"
            <<"\n1. Input\n"
            <<"2. Show\n"
            <<"3. Save to file\n"
            <<"4. Read from file\n"
            <<"0. Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        {int n;
        cout<<"\nKitna student ka data enter krna hai?"<<endl;
        cin>>n;
        Student s;
        for (int i = 0; i < n; i++)
        {
            cout<<"\n<---("<<i+1<<")--->"<<endl;
             
            s.input();
            students.push_back(s);
        }
        cout<<"\n Students data enter succcessfully"<<endl;
            break;
    }
        case 2:
        for (int i = 0; i < students.size(); i++)
        {
            students[i].show();
        }
        break;
        case 3:
        for (int i = 0; i < students.size(); i++)
        {
            students[i].SaveToFile();
        }
        cout<<"Your data save in file successfully"<<endl;
        break;
        case 4:{
        Student s1;
        s1.ReadFromFile();
    
        break;
        }
        case 0:
         cout<<"\n<------------------------>\n";
         break;
        default:
        cout<<"Invalid Input"<<endl;
            break;
        }
    }while(choice!=0);
    cout<<"\nProgram exit successfully"<<endl;
    return 0;
}