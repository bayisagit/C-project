#include <iostream>
#include <fstream>
using namespace std;

struct employee {
    string name;
    int id;
    char sex;
    float salary;
};

int main() {
    ofstream ban("reco.txt", ios::out);
    if (ban.is_open()) {
        cout << "The file is opened successfully" << endl;
    }
    else {
        cout << "Failed to open the file" << endl;
        return 1;
    }

    employee emp[50];
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of " << i + 1 << " name: ";
        cin >> emp[i].name;
        cout << "Enter the id: ";
        cin >> emp[i].id;
        cout << "Enter the sex: ";
        cin >> emp[i].sex;
        cout << "Enter the salary: ";
        cin >> emp[i].salary;
    }

    for (int i = 0; i < n; i++) {
        ban << emp[i].name << " " << emp[i].id << " " << emp[i].sex << " " << emp[i].salary << endl;
    }
    ban.close();

    ifstream dob("reco.txt", ios::in);
    if (dob.is_open()) {
        cout << "The file is opened successfully" << endl;
    }
    else {
        cout << "Failed to open the file" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        dob >> emp[i].name >> emp[i].id >> emp[i].sex >> emp[i].salary;
        cout << emp[i].name << " " << emp[i].id << " " << emp[i].sex << " " << emp[i].salary << endl;
    }
    dob.close();

    ofstream ken("reco.txt", ios::app);
    if (ken.is_open()) {
        cout << "The file is opened successfully for append:" << endl;
    }
    else {
        cout << "Failed to open successfully:" << endl;
        return 1;
    }
    ken << "alemu" << " " << "23" << " " << 'm' << " " << "4786" << endl;
    ken.close();

    ifstream ren("reco.txt", ios::in);
    if (ren.is_open()) {
        cout << "The file is opened successfully for reading:" << endl;

        // Reposition the read pointer to the middle of the last line
        ren.seekg(-3, ios::end);
        char c;
        ren >> c;
        cout << "The character at the middle of the last line is: " << c << endl;
    }
    else {
        cout << "Failed to open successfully:" << endl;
        return 1;
    }
    ren.close();
    ifstream mul("reco.txt",ios::in);
    if(mul.is_open()){
        cout<<"the file is opened successfully"<<endl;
    }
    else{
        cout<<"failed to open the file"<<endl;
        return 1;
    }
    for(int i=0;i<=n;i++){
    mul>>emp[i].name>>emp[i].id>>emp[i].sex>>emp[i].salary;
    cout<<emp[i].name<<" "<<emp[i].id<<" "<<emp[i].sex<<" "<<emp[i].salary<<endl;
    }
    mul.close();
    return 0;

}