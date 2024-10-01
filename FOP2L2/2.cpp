#include <iostream>
#include <vector>
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

    vector<int> marks(numCourses);
    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter mark of course " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "\nHere is the grade for the marks you entered:" << endl;
    cout << "Mark\tGrade" << endl;
    for (int mark : marks) {
        cout << mark << "\t" << getGrade(mark) << endl;
    }

    char calculateGPA;
    cout << "Would you like to know your GPA? (Y/N): ";
    cin >> calculateGPA;

    if (toupper(calculateGPA) == 'Y') {
        double value = 0.0;
        for (int mark : marks) {
            string grade = getGrade(mark);
            if (grade == "A+") {
                value += 4.0;
            } else if (grade == "A") {
                value += 3.7;
            } else if (grade == "A-") {
                value += 3.3;
            } else if (grade == "B+") {
                value += 3.0;
            } else if (grade == "B") {
                value += 2.7;
            } else if (grade == "B-") {
                value += 2.3;
            } else if (grade == "C+") {
                value+= 2.0;
            } else if (grade == "C") {
                value += 1.7;
            }
        }

        double gpa =value/ numCourses;
        cout << fixed << setprecision(1);
        cout << "Your GPA is " << gpa <<endl;
    }

    return 0;
}


