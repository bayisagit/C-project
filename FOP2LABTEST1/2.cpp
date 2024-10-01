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

// Define a template function to write a vector of any type to a file
template <typename T>
void writeVectorToFile(const vector<T>& vec, const string& filename) {
    ofstream outfile(filename);
    if (!outfile.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }

    for (const T& element : vec) {
        outfile << element.name << " " << element.age << " " << element.salary << endl;
    }

    outfile.close();
}

// Define a template function to read a vector of any type from a file
template <typename T>
void readVectorFromFile(vector<T>& vec, const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }

    T element;
    while (infile >> element.name >> element.age >> element.salary) {
        vec.push_back(element);
    }

    infile.close();
}

int main() {
    // Create a vector of employees
    vector<Employee> employees;

    // Read employee data from the console
    cout << "Enter the employee data (name, age, salary):" << endl;
    for (int i = 0; i < 3; i++) {
        Employee employee;
        cin >> employee.name >> employee.age >> employee.salary;
        employees.push_back(employee);
    }

    // Write the vector of employees to a file
    writeVectorToFile(employees, "employees.txt");

    // Read the vector of employees from the file
    vector<Employee> employees2;
    readVectorFromFile(employees2, "employees.txt");

    // Print the employee data
    cout << "Employee data:" << endl;
    for (const Employee& employee : employees2) {
        cout << "Name: " << employee.name << endl;
        cout << "Age: " << employee.age << endl;
        cout << "Salary: " << employee.salary << endl << endl;
    }

    return 0;
}
