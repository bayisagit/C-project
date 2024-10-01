#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;
    int left = 0, right = word.length() - 1;

    while (left < right) {
        if (tolower(word[left]) != tolower(word[right])) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "The word is a palindrome" << endl;
    } else {
        cout << "The word is not a palindrome" << endl;
    }

    return 0;
}