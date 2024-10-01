#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char c, d, ans;
    string str;
    ofstream outFile("try.txt");

    // Read a string from keyboard and write to a file.
    do {
        cout << "Please give the string: ";
        getline(cin, str);

        outFile << str << endl;

        cout << "Do you want to write more...<y/n>: ";
        cin >> ans;
    } while (ans == 'y');

    outFile.close();

    // Copying file content using get() and put() functions
    ifstream inFile("try.txt");
    ofstream outFile2("cod.dat");
    cout << "Reading from created file and copying to other file\n";
    inFile.get(c);
    do {
        d = c + 1;
        cout << c << d << '\n';
        outFile2.put(d);
        inFile.get(c);
    } while (c != '\0');

    outFile2 << '\0';
    inFile.close();
    outFile2.close();

    return 0;
}
