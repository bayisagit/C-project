/*define a function called sort elements that sort an array of n elements and return the
sorted elements and display them in main function;
function sort elements
how many elements 5
enter element1 6
enter element1 8
enter element1 2
enter element1 8
enter element1 9
main function
the ordered element are 2 5 6 8 8 9*/
#include <iostream>
using namespace std;

void sorts(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    sorts(arr, n);

    cout << "The ordered elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
