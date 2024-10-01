#include <iostream>
#include <string>
#include <cctype> // Include the header for character handling functions

using namespace std;

int main() {
    int t;
    cin >> t;

    string s = "codeforces"; // Define the string to search for

    while (t--) {
        char letter;
        cin >> letter;

        // Convert the character to lowercase for consistency
        letter = tolower(letter);

        // Check if the character appears in "codeforces"
        if (s.find(letter) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
