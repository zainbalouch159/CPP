#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[4];
    int marks[4];
    for(int i=0; i<4; i++){
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>names[i];
        cout<<"Enter marks of "<<names[i]<<": ";
        cin>>marks[i];
    }
    for (int i=0; i<4; i++){
        cout<<"Name: "<<names[i]<<", Marks: "<<marks[i]<<endl;
    }
   int maxMarks = marks[0];
   int maxIndex = 0;
   for (int i=1; i<4; i++){
       if(marks[i] > maxMarks){
           maxMarks = marks[i];
              maxIndex = i;
       }
    }
    int min_marks = marks[0];
    int min_index = 0;
    for (int i=1; i<4; i++){
        if(marks[i] < min_marks){
            min_marks = marks[i];
            min_index = i;
        }
    
    }
      cout<<"Current highest marks after checking "<<names[maxIndex]<<": "<<maxMarks<<endl;
    cout<<"Current lowest marks after checking "<<names[min_index]<<": "<<min_marks<<endl;
    return 0;
}