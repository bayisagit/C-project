#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct employ {
    string id;
    string name;
    double gross_salary;
    double income_tax;
    double net_salary;
};

void calculateNetSalary(employ &emp) {
    if (emp.gross_salary >= 10000) {
        emp.income_tax = emp.gross_salary * 0.35;
    } else if (emp.gross_salary >= 5000) {
        emp.income_tax = emp.gross_salary * 0.2;
    } else if (emp.gross_salary >= 3000) {
        emp.income_tax = emp.gross_salary * 0.1;
    } else {
        emp.income_tax = 0;
    }
    emp.net_salary = emp.gross_salary - emp.income_tax;
}

int main() {
    employ employs[50];
    int n;
    cout << "How many employees? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Employee ID " << i + 1 << ": ";
        cin >> employs[i].id;
        cout << "Employee Name " << i + 1 << ": ";
        cin >> employs[i].name;
        cout << "Gross Salary " << i + 1 << ": ";
        cin >> employs[i].gross_salary;
        calculateNetSalary(employs[i]);
    }

    cout << "\nEmployee Details:\n";
    cout << "------------------------------------------------------------------\n";
    cout << "ID" << setw(15) << "Name" << setw(15) << "Net Salary\n";
    cout << "------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << employs[i].id << setw(13) << employs[i].name << setw(13) << employs[i].net_salary << endl;
    }

    string choice;
    cout << "\nWould you like to search for a specific employee by ID? (yes/no): ";
    cin >> choice;

    if (choice == "yes") {
        string searchId;
        cout << "Enter the ID you want to search: ";
        cin >> searchId;

        bool found = false;
        cout << "\nSearch Results:\n";
        cout << "------------------------------------------------------------------\n";

        for (int i = 0; i < n; i++) {
            if (employs[i].id == searchId) {
                found = true;
                cout << "ID" << setw(15) << "Name" << setw(15) << "Net Salary\n";
                cout << "------------------------------------------------------------------\n";
                cout << employs[i].id << setw(13) << employs[i].name << setw(13) << employs[i].net_salary << endl;
                break;
            }
        }

        if (!found) {
            cout << "Employee with ID " << searchId << " not found." << endl;
        }
    } else {
        cout << "\nGoodbye!\n";
    }

    return 0;
}
