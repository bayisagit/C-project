#include <iostream>
using namespace std;

void findMax(float*& maxElement, float*& arrays) {
    float* A = new float[100];
    int n;
    cout << "How many numbers you are going to enter? " << endl;
    cin >> n;
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    float* theMax = A;
    for (int i = 0; i < n; i++) {
        if (A[i] > *theMax)
            theMax = &A[i];
    }

    maxElement = theMax;
    arrays = A;
}

int main() {
    int n;
    float* maxA;
    float* A;

    findMax(maxA, A);

    cout << "Array values: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "The maximum value is: " << *maxA << endl;
    cout << "The value at A[3]: " << A[3] << endl;

    delete[] A; // Free the dynamically allocated memory

    return 0;
}



