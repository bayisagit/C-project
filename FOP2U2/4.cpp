#include <iostream>
#include <string>

using namespace std;



struct Student {
    string name;
    int id;
    int marks[100];
    char grades[100];
};

void inputStudentData(Student students[], int &n, int m) {
    cout<<"how many subjects do you take? ";
        cin>>m;
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;

        // Input marks for each subject

        for (int j = 0; j < m; j++) {
            cout << "Enter mark for subject " << j + 1 << ": ";
            cin >> students[i].marks[j];

            // Assign grade based on marks (you can modify this based on your grading criteria)
            if (students[i].marks[j] >= 90) {
                students[i].grades[j] = 'A';
            } else if (students[i].marks[j] >= 80) {
                students[i].grades[j] = 'B';
            } else if (students[i].marks[j] >= 70) {
                students[i].grades[j] = 'C';
            } else if (students[i].marks[j] >= 60) {
                students[i].grades[j] = 'D';
            } else {
                students[i].grades[j] = 'F';
            }
        }
    }
}

int main() {
    int n,m;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[100];
    inputStudentData(students, n,m);

    // Displaying the entered data
    for (int i = 0; i < n; i++) {
        cout << "Details for student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;

        // Display marks and grades for each subject
        for (int j = 0; j < n; j++) {
            if (students[i].marks[j] == -1) {
                break; // Exit loop if no more subjects
            }
            cout << "Subject " << j + 1 << ": Mark = " << students[i].marks[j] << ", Grade = " << students[i].grades[j] << endl;
        }
    }

    return 0;
}
