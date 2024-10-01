#include <iostream>
#include <iomanip>
using namespace std;

struct employ {
    char name[50];
    int age;
    double salary;
    int yearleft;
};

float calc(employ emp) {
    int counts = 0;
    float totalsalary = 0;
    int yearleft = 50 - emp.age;
    if (yearleft < 5) {
        counts++;
    }
    totalsalary += emp.salary;
    return totalsalary;
}

void numyearsleft(employ &emp) {
    emp.yearleft = 50 - emp.age;
}

int main() {
    int n;
    cout << "How many employees? ";
    cin >> n;
    employ employs[n];
    int counts = 0;
    float totalsalary = 0;
    for (int i = 0; i < n; i++) {
        cout << "Employee Name " << i + 1 << ": ";
        cin >> employs[i].name;
        cout << "Employee age: ";
        cin >> employs[i].age;
        cout << "Gross Salary: ";
        cin >> employs[i].salary;
        totalsalary += calc(employs[i]);
        numyearsleft(employs[i]);
    }

    cout << "\nEmployee Details:\n";
    cout << "------------------------------------------------------------------\n";
    cout << "name" << setw(15) << "age" << setw(15) << "Salary\n" << setw(15) << "year left" << endl;
    cout << "------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << employs[i].name << setw(13) << employs[i].age << setw(13) << employs[i].salary << setw(13) << employs[i].yearleft << endl;
    }

    cout << "the number of employee <5 years left and total salary paid is: " << counts << " " << totalsalary << endl;

    return 0;
}
