#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Define a structure to store employee data
struct Employee {
    string name;
    int age;
    double salary;
};

int main() {
    // Create a vector to store employee data
    vector<Employee> employees;

    // Read employee data from the console
    cout << "Enter the employee data (name, age, salary):" << endl;
    for (int i = 0; i < 3; i++) {
        Employee employee;
        cin >> employee.name >> employee.age >> employee.salary;
        employees.push_back(employee);
    }
    

    // Write employee data to a file
    ofstream outfile("employees.txt");
    if (!outfile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    for (const Employee& employee : employees) {
        outfile << employee.name << "," << employee.age << "," << employee.salary << endl;
    }

    outfile.close();

    // Read employee data from the file
    ifstream infile("employees.txt");
    if (!infile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    // Clear the vector before reading from the file
    employees.clear();

    // Read each line of the file and parse the employee data
    string line;
    while (getline(infile, line)) {
        // Split the line into the employee's name, age, and salary
        vector<string> tokens;
        string delimiter = ",";
        size_t pos = 0;
        while ((pos = line.find(delimiter)) != string::npos) {
            tokens.push_back(line.substr(0, pos));
            line.erase(0, pos + delimiter.length());
        }
        tokens.push_back(line);

        // Create an employee object and add it to the vector
        Employee employee;
        employee.name = tokens[0];
        employee.age = stoi(tokens[1]);
        employee.salary = stod(tokens[2]);
        employees.push_back(employee);
    }

    // Print the employee data
    cout << "Employee data:" << endl;
    for (const Employee& employee : employees) {
        cout << "Name: " << employee.name << endl;
        cout << "Age: " << employee.age << endl;
        cout << "Salary: " << employee.salary << endl << endl;
    }

    return 0;
}
