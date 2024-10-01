#include <iostream>
using namespace std;

int main() {
    // Create an array to store the frequency of each number
    int freq[100] = {0};

    // Get the number of elements in the array
    cout << "How many numbers are you going to enter: ";
    int n;
    cin >> n;

    // Get the array elements
    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // Increment the frequency of the current number
        freq[arr[i]]++;
    }
    int maxFreq=0;
    int maxFreqNum;

    for (int i = 0; i < 100; i++) {
            if(freq[i]>maxFreq){
                maxFreq=freq[i];
                maxFreqNum=i;
            }

    }

    // Print the number with the highest frequency
    cout << "The number with the highest frequency is: " << maxFreqNum << endl;
    cout << "Its frequency is: " << maxFreq << endl;

    return 0;
}
