
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
    ofstream ken("come.txt", ios::out);
    if (ken.is_open()) {
        cout << "The file is opened successfully for append:" << endl;
    }
    else {
        cout << "Failed to open successfully:" << endl;
        return 1;
    }
    ken << "alemu" << " " << "23" << " " << 'm' << " " << "4786" << endl;
    ken.close();

    ifstream ren("come.txt", ios::in);
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
    return 0;
}