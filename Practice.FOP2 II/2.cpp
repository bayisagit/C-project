#include <iostream>
#include <fstream>
using namespace std;

struct student {
    int id;
    string name;
    float mark;
    char grade;
};

void getdata(student students[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the id of student " << i + 1 << ": ";
        cin >> students[i].id;
        cout << "Enter the name: ";
        cin >> students[i].name;
        cout << "Enter the mark: ";
        cin >> students[i].mark;
        students[i].grade = (students[i].mark >= 50) ? 'P' : 'F';
    }
}

void writetofiles(student students[], int n) {
    ofstream file("stud.txt");
    if (file.is_open()) {
        for (int i = 0; i < n; i++) {
            file << students[i].id << " " << students[i].name << " " << students[i].mark << " " << students[i].grade << endl;
        }
        file.close();
        cout << "The data has been written successfully to the file stud.txt" << endl;
    } else {
        cout << "The file is not open!" << endl;
    }
}

void readFromFile() {
    ifstream file("stud.txt");
    if (file.is_open()) {
        string id, name;
        float mark;
        char grade;
        cout << "ID\tName\tMark\tGrade" << endl;
        while (file >> id >> name >> mark >> grade) {
            cout << id << "\t" << name << "\t" << mark << "\t" << grade << endl;
        }
        file.close();
    } else {
        cout << "The file is not opened for reading from the file successfully!" << endl;
    }
}

void update(student students[], int n, int idToUpdate,int newMark) {
    for (int i = 0; i < n; i++) {
        if (students[i].id == idToUpdate) {
            students[i].mark = newMark;
            students[i].grade = (students[i].mark >= 50) ? 'P' : 'F';
            break;
        }
    }
}

int main() {
    int n;
    cout << "How many students are there: ";
    cin >> n;

    student students[n];
    getdata(students, n);

    writetofiles(students, n);

    cout << "The data from stud.txt is as follows:" << endl;
    readFromFile();

    int idToUpdate;
    int newMark;
    cout << "Enter the ID you want to update: ";
    cin >> idToUpdate;
    cout << "Enter the new mark: ";
    cin >> newMark;

    update(students, n, idToUpdate, newMark);
    writetofiles(students, n);

    cout << "Updated data from stud.txt:" << endl;
    readFromFile();

    return 0;
}
