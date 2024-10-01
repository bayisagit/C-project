#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream myself;
    myself.open("Sheet5Ex5",ios::out);
    if(myself.is_open()){
            cout<<"the file is opened successfully"<<endl;
    myself<<"asdfghjklqwertyuiopzxcvbnm qwe we e"<<endl;
    cout<<"asdfghjklqwertyuiopzxcvbnm qwe we e"<<endl;
    myself.close();
    }
    else{
        cout<<"the file is not opened successfully"<<endl;
    }
    ifstream fin("Sheet5Ex5",ios::in);

    // Declare the variables
    char ch;
    int counts[26] = {0};
    int total = 0;

    // Read the file character by character
    while (fin.get(ch)) {
        // Check if the character is a lowercase letter
        if (ch >= 'a' && ch <= 'z') {
            // Increment the count for the corresponding letter
            counts[ch - 'a']++;
            total++;
        }
    }

    // Close the file
    fin.close();

    // Print the table
    cout << "CHARACTER OCCURRENCES" << endl;
    for (int i = 0; i < 26; i++) {
        cout << (char)('a' + i) << " " << counts[i] << endl;
    }
    cout << "Total: " << total << endl;
return 0;
}
