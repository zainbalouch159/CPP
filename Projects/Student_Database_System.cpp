#include <iostream>
#include <fstream>
using namespace std;

#define MAX 100

struct Student {
    int id;
    string name;
    
    float marks;
};

Student s[MAX];
int countStudent = 0;

// Add Student
void addStudent() {
    cout << "Enter ID: ";
    cin >> s[countStudent].id;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s[countStudent].name);

    cout << "Enter Marks: ";
    cin >> s[countStudent].marks;

    countStudent++;
    cout << "Student added successfully\n";
}

// Display Students
void displayStudents() {
    if (countStudent == 0) {
        cout << "No records found\n";
        return;
    }

    cout << "\nID\tName\tMarks\n";
    for (int i = 0; i < countStudent; i++) {
        cout << s[i].id << "\t"
             << s[i].name << "\t"
             << s[i].marks << endl;
    }
}

// Save to File
void saveToFile() {
    ofstream file("students.txt");

    if (!file) {
        cout << "File error\n";
        return;
    }

    for (int i = 0; i < countStudent; i++) {
        file << s[i].id << " "
             << s[i].name << " "
             << s[i].marks << endl;
    }

    file.close();
    cout << "Saved to file successfully\n";
}

// Load from File
void loadFromFile() {
    ifstream file("students.txt");

    if (!file) {
        cout << "File not found\n";
        return;
    }

    countStudent = 0;

    while (file >> s[countStudent].id
                >> s[countStudent].name
                >> s[countStudent].marks) {
        countStudent++;
    }

    file.close();
    cout << "Data loaded from file\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Student Marks System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All\n";
        cout << "3. Save to File\n";
        cout << "4. Load from File\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: saveToFile(); break;
            case 4: loadFromFile(); break;
            case 5: cout << "Program End\n"; break;
            default: cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}
