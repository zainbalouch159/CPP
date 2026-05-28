#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

class rezult
{
    string subjects[6] = {"Discrete Structures", "ICT", "Programming Fundamentals", "English", "Ideology", "Islamiyat"};
    float marks[10][6];
    static const int totalMarks = 150;
    float ObtainedMarks[10];
    float requiredMarks;
    string grade[10];
    string requiredGrade;
    float percentage[10];
    float requiredPercentage;
    float average[10];
    float gpa[10];
    float requiredGPA;
    int studentCount;
    string studentName[10];
    float maxsubjectsmarks[10];
    float minsubjectsmarks[10];
    string topSubject[10];
    string weakSubject[10];
    int idx[10];

public:
    void inputData();
    void inputMarks(int currentStudentIndex);
    void calculateRezult(int currentStudentIndex);
    void displayRezult(int currentStudentIndex);
    void motivationCorner(int currentStudentIndex);
    void compareStudents();
};
void rezult::inputData()
{
    cout << "Enter number of students(Max 10): ";
    cin >> studentCount;
    if (studentCount > 10)
    {
        cout << "Maximum 10 students allowed.";
        exit(0);
    }

    cin.ignore();
    for (int i = 0; i < studentCount; i++)
    {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, studentName[i]);
        ObtainedMarks[i] = 0;
    }
    for (int i = 0; i < studentCount; i++)
    {
        inputMarks(i);
        calculateRezult(i);
        displayRezult(i);
        motivationCorner(i);
    }
}
void rezult::inputMarks(int currentStudentIndex)
{
    ObtainedMarks[currentStudentIndex] = 0;
    cout << "\n============================================\n";
    cout << "\n    === Enter Midterm Marks of " << studentName[currentStudentIndex] << " ===\n";
    cout << "\n============================================\n\n";
    for (int j = 0; j < 6; j++)
    {
        marks[currentStudentIndex][j] = 0;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of " << subjects[i] << " of " << studentName[currentStudentIndex] << ": ";
        cin >> marks[currentStudentIndex][i];
        if (marks[currentStudentIndex][i] > 25)
        {
            cout << "Auqat sa bahar na jao.";
            exit(0);
        }
        else if (marks[currentStudentIndex][i] < 0)
        {
            cout << "Itne bhi bure haalaat nahi hain ke minus mein chale jao.";
            exit(0);
        }
        ObtainedMarks[currentStudentIndex] += marks[currentStudentIndex][i];
    }
}
void rezult::calculateRezult(int currentStudentIndex)
{
    percentage[currentStudentIndex] = (ObtainedMarks[currentStudentIndex] / 150.0) * 100;
    average[currentStudentIndex] = ObtainedMarks[currentStudentIndex] / 6.0;
    gpa[currentStudentIndex] = (percentage[currentStudentIndex] / 100.0) * 4.0;
    maxsubjectsmarks[currentStudentIndex] = 0;
    minsubjectsmarks[currentStudentIndex] = 25;

    for (int i = 0; i < 6; i++)
    {
        if (marks[currentStudentIndex][i] > maxsubjectsmarks[currentStudentIndex])
        {
            maxsubjectsmarks[currentStudentIndex] = marks[currentStudentIndex][i];
            topSubject[currentStudentIndex] = subjects[i];
        }
        if (marks[currentStudentIndex][i] < minsubjectsmarks[currentStudentIndex])
        {
            minsubjectsmarks[currentStudentIndex] = marks[currentStudentIndex][i];
            weakSubject[currentStudentIndex] = subjects[i];
        }
    }
    if (percentage[currentStudentIndex] >= 90)
    {
        grade[currentStudentIndex] = "A+";
    }
    else if (percentage[currentStudentIndex] >= 80 && percentage[currentStudentIndex] < 90)
    {
        grade[currentStudentIndex] = "A";
        requiredGrade = "A+";
        requiredPercentage = 90;
        requiredGPA = 4.0;
        requiredMarks = 135;
    }
    else if (percentage[currentStudentIndex] >= 75 && percentage[currentStudentIndex] < 80)
    {
        grade[currentStudentIndex] = "B+";
        requiredGrade = "A";
        requiredPercentage = 80;
        requiredGPA = 3.7;
        requiredMarks = 120;
    }
    else if (percentage[currentStudentIndex] >= 70 && percentage[currentStudentIndex] < 75)
    {
        grade[currentStudentIndex] = "B";
        requiredGrade = "A";
        requiredPercentage = 80;
        requiredGPA = 3.7;
        requiredMarks = 120;
    }
    else if (percentage[currentStudentIndex] >= 65 && percentage[currentStudentIndex] < 70)
    {
        grade[currentStudentIndex] = "C+";
        requiredGrade = "B";
        requiredPercentage = 70;
        requiredGPA = 3.0;
        requiredMarks = 105;
    }
    else if (percentage[currentStudentIndex] >= 60 && percentage[currentStudentIndex] < 65)
    {
        grade[currentStudentIndex] = "C";
        requiredGrade = "B";
        requiredPercentage = 70;
        requiredGPA = 3.0;
        requiredMarks = 105;
    }
    else if (percentage[currentStudentIndex] >= 55 && percentage[currentStudentIndex] < 60)
    {
        grade[currentStudentIndex] = "D+";
        requiredGrade = "C";
        requiredPercentage = 60;
        requiredGPA = 2.3;
        requiredMarks = 90;
    }
    else if (percentage[currentStudentIndex] >= 50 && percentage[currentStudentIndex] < 55)
    {
        grade[currentStudentIndex] = "D";
        requiredGrade = "C";
        requiredPercentage = 60;
        requiredGPA = 2.3;
        requiredMarks = 90;
    }
    else
    {
        grade[currentStudentIndex] = "F";
        requiredGrade = "D";
        requiredPercentage = 50;
        requiredGPA = 2.0;
        requiredMarks = 75;
    }
    cout << fixed << setprecision(2);
}
void rezult::displayRezult(int currentStudentIndex)
{
    bool hasTop = false;
    bool hasWeak = false;
    for (int i = 0; i < 6; i++)
    {
        if (marks[currentStudentIndex][i] > average[currentStudentIndex])
            hasTop = true;
        if (marks[currentStudentIndex][i] < average[currentStudentIndex])
            hasWeak = true;
    }
    cout << "\n====================================\n";
    cout << "  MIDTERM REZULT REPORT of " << studentName[currentStudentIndex];
    cout << "\n====================================\n";
    cout << "Rezult: " << ObtainedMarks[currentStudentIndex] << "/" << totalMarks << endl;
    cout << "Percentage: " << percentage[currentStudentIndex] << "%" << endl;
    if (grade[currentStudentIndex] == "A+")
    {
        cout << "Grade: A+ 📈" << endl;
    }
    else if (grade[currentStudentIndex] == "F")
    {
        cout << "Grade: F 💀" << endl;
    }
    else
    {
        cout << "Grade: " << grade[currentStudentIndex] << endl;
    }
    if (gpa[currentStudentIndex] == 4.00)
    {
        cout << "GPA: 4.00 😦" << endl;
    }
    else if (gpa[currentStudentIndex] == 0.00)

    {
        cout << "GPA: 0.00 😮" << endl;
    }
    else
    {
        cout << "GPA: " << gpa[currentStudentIndex] << endl;
    }
    if (percentage[currentStudentIndex] >= 50 && percentage[currentStudentIndex] < 100)
    {
        if (hasTop)
        {
            cout << "\n------------------Top Subjects------------------\n";
            for (int i = 0; i < 6; i++)
            {
                if (marks[currentStudentIndex][i] > average[currentStudentIndex])
                {
                    cout << "🔥" << subjects[i] << ":" << marks[currentStudentIndex][i] << " average sa +" << marks[currentStudentIndex][i] - average[currentStudentIndex] << " zyada." << endl;
                }
            }
        }
        if (hasWeak)
        {
            cout << "\n------------Focus in this Subjects--------------\n";
            for (int i = 0; i < 6; i++)

            {
                if (marks[currentStudentIndex][i] < average[currentStudentIndex])
                {
                    cout << "🤡 " << subjects[i] << ":" << marks[currentStudentIndex][i] << " average sa " << marks[currentStudentIndex][i] - average[currentStudentIndex] << " kam." << endl;
                }
            }
        }
    }
    if (percentage[currentStudentIndex] >= 90 && percentage[currentStudentIndex] < 100.00)
    {
        cout << "\n"
             << studentName[currentStudentIndex] << " Apka bad andhera hai.🔥" << endl;
    }
    else if (percentage[currentStudentIndex] == 100.00)
    {
        cout << "🔥📈 " << studentName[currentStudentIndex] << " Apka bad sach ma andhera hai";
    }
    else if (percentage[currentStudentIndex] < 50)
    {
        cout << "💀 " << studentName[currentStudentIndex] << " Apki fielding set hai.";
    }
    if (!hasTop && !hasWeak)
    {
        cout << "\n⚖️  Next level Consistency" << endl;
    }
}
void rezult::motivationCorner(int currentStudentIndex)
{
    if (grade[currentStudentIndex] != "A+")
    {
        cout << "\n====================================\n";
        cout << "         " << studentName[currentStudentIndex] << " If you want " << requiredGrade;
        cout << "\n====================================\n";
        cout << "Then you need to get at least " << requiredMarks << endl;
        cout << "Which is " << requiredPercentage << "%" << endl;
        cout << "And your GPA will be " << requiredGPA << endl;
        if (grade[currentStudentIndex] != "F")
            cout << "Keep pushing your limits!" << endl;
        if (grade[currentStudentIndex] == "F")
        {
            cout << studentName[currentStudentIndex] << " Kam az kam pass tu hojao. 🙃" << endl;
        }
    }
    else
    {
        cout << "\n====================================\n";
        cout << "  🔓 HACKER ENTER THE LOBBY 🔓 ";
        cout << "\n====================================\n";
        cout << studentName[currentStudentIndex] << " Apka jawab nhi. 🔥📈" << endl;
    }
}
void rezult::compareStudents()
{
    for (int i = 0; i < studentCount; i++)
    {
        idx[i] = i;
    }

    if (studentCount > 0)
    {
        for (int i = 0; i < studentCount; i++)
        {
            idx[i] = i;
        }
        for (int i = 0; i < studentCount - 1; i++)
        {
            for (int j = i + 1; j < studentCount; j++)
            {
                if (ObtainedMarks[idx[i]] < ObtainedMarks[idx[j]])
                {
                    swap(idx[i], idx[j]);
                }
            }
        }

        cout << "\n====================================\n";
        cout << "     Students Comparison Report      ";
        cout << "\n====================================\n";

        cout << "1 😎 " << studentName[idx[0]] << " - " << ObtainedMarks[idx[0]] << "/150 " << percentage[idx[0]] << "% - " << grade[idx[0]] << " - GPA: " << gpa[idx[0]] << " Top Subject " << topSubject[idx[0]] << " - " << maxsubjectsmarks[idx[0]] << " Weak Subject " << weakSubject[idx[0]] << " - " << minsubjectsmarks[idx[0]] << endl;
        for (int i = 1; i < studentCount - 1; i++)
        {
            cout << i + 1 << " " << studentName[idx[i]] << " - " << ObtainedMarks[idx[i]] << "/150 " << percentage[idx[i]] << "% - " << grade[idx[i]] << " - GPA: " << gpa[idx[i]] << " Top Subject " << topSubject[idx[i]] << " - " << maxsubjectsmarks[idx[i]] << " Weak Subject " << weakSubject[idx[i]] << " - " << minsubjectsmarks[idx[i]] << endl;
        }
        cout << studentCount << " 🤡 " << studentName[idx[studentCount - 1]] << " - " << ObtainedMarks[idx[studentCount - 1]] << "/150 " << percentage[idx[studentCount - 1]] << "% - " << grade[idx[studentCount - 1]] << " - GPA: " << gpa[idx[studentCount - 1]] << " Top Subject " << topSubject[idx[studentCount - 1]] << " - " << maxsubjectsmarks[idx[studentCount - 1]] << " Weak Subject " << weakSubject[idx[studentCount - 1]] << " - " << minsubjectsmarks[idx[studentCount - 1]] << endl;
    }
}

int main()
{
    rezult student;
    student.inputData();
    student.compareStudents();
    

    return 0;
}
