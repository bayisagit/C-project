#include <iostream>
#include <iomanip>
using namespace std;

string getGrade(int mark) {
    if (mark >= 90) {
        return "A+";
    } else if (mark >= 85) {
        return "A";
    } else if (mark >= 80) {
        return "A-";
    } else if (mark >= 75) {
        return "B+";
    } else if (mark >= 70) {
        return "B";
    } else if (mark >= 65) {
        return "B-";
    } else if (mark >= 60) {
        return "C+";
    } else if (mark >= 55) {
        return "C";
    } else {
        return "F";
    }
}

int main() {
    string name;
    cout << "What is your name? ";
    cin >> name;

    int numCourses;
    cout << "Hi " << name << ", how many courses do you want to take? ";
    cin >> numCourses;

    int totalMarks = 0;
    double gpa = 0.0;

    cout << "\nEnter the marks for each course:" << endl;
    for (int i = 1; i <= numCourses; ++i) {
        int mark;
        cout << "Enter mark of course " << i << ": ";
        cin >> mark;
        totalMarks += mark;
        string grade = getGrade(mark);

        cout << "Grade for course " << i << ": " << grade << endl;

        if (grade == "A+") {
            gpa += 4.0;
        } else if (grade == "A") {
            gpa += 3.7;
        } else if (grade == "A-") {
            gpa += 3.3;
        } else if (grade == "B+") {
            gpa += 3.0;
        } else if (grade == "B") {
            gpa += 2.7;
        } else if (grade == "B-") {
            gpa += 2.3;
        } else if (grade == "C+") {
            gpa += 2.0;
        } else if (grade == "C") {
            gpa += 1.7;
        }
    }

    gpa /= numCourses;

    cout << "\nTotal marks: " << totalMarks << endl;
    cout << fixed << setprecision(1);
    cout << "Your GPA is: " << gpa <<endl;

    return 0;
}
