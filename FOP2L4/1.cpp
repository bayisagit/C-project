#include <iostream>
#include <iomanip>

using namespace std;

union ExamResult {
    int exams[3];
    int total;
};

struct Student {
    int id;
    string name;
    union ExamResult result;
    char grade;
};

void calculateTotalAndGrade(Student& student) {
    student.result.total = student.result.exams[0] + student.result.exams[1] + student.result.exams[2];

    if (student.result.total >= 90) {
        student.grade = 'A';
    } else if (student.result.total >= 80) {
        student.grade = 'B';
    } else if (student.result.total >= 70) {
        student.grade = 'C';
    } else if (student.result.total >= 60) {
        student.grade = 'D';
    } else {
        student.grade = 'F';
    }
}

int main() {
    int numStudents;
    cout << "How many students: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter id: ";
        cin >> students[i].id;

        cout << "Enter name: ";
        cin >> students[i].name;

        cout << "Enter exam1: ";
        cin >> students[i].result.exams[0];

        cout << "Enter exam2: ";
        cin >> students[i].result.exams[1];

        cout << "Enter exam3: ";
        cin >> students[i].result.exams[2];

        calculateTotalAndGrade(students[i]);
    }

    cout << "Student List:" << endl;
    cout << "id"<<setw(10)<<"name"<<setw(10)<<"total"<<setw(10)<<"grade" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].id << setw(12) << students[i].name << setw(7) << students[i].result.total <<setw(8) << students[i].grade << endl;
    }

    return 0;
}
