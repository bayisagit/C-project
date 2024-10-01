#include <iostream>
#include <fstream>
using namespace std;

struct info {
    char name[50];
    int age;
    char address1[50];
    char address2[50];
    char phone[50];
};

int main() {
    info person;
    char again;
    fstream people;
    people.open("ummata.dat", ios::out);

    if (!people) {
        cout << "Error opening file" << endl;
        return 1;
    }

    do {
        cout << "Enter the following data about a person" << endl;
        cout << "Name: ";
        cin.getline(person.name, 50);
        cout << "Age: ";
        cin >> person.age;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << "Address1: ";
        cin.getline(person.address1, 50);
        cout << "Address2: ";
        cin.getline(person.address2, 50);
        cout << "Phone: ";
        cin.getline(person.phone, 50);

        people.write(reinterpret_cast<char*>(&person), sizeof(person));

        cout << "Would you like to record for another person? (y/n) ";
        cin >> again;
        cin.ignore(); // Clear the newline character from the input buffer
    } while (tolower(again) == 'y');

    people.close();

    return 0;
}
