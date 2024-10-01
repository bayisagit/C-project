#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    int sqrtNumber = sqrt(number);
    for (int i = 2; i <= sqrtNumber; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void displayPrimeNumbers() {
    cout << "Prime numbers between 1 and 100:" << endl;
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

void primeFactors(int number) {
    cout << "Prime factors of " << number << " are: ";

    while (number % 2 == 0) {
        cout << 2 << " ";
        number /= 2;
    }

    for (int i = 3; i <= sqrt(number); i += 2) {
        while (number % i == 0) {
            cout << i << " ";
            number /= i;
        }
    }

    if (number > 2) {
        cout << number;
    }

    cout << endl;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    displayPrimeNumbers();

    int sum = sumOfPrimes(number);
    cout << "Sum of prime numbers between 1 and " << number << " is: " << sum << endl;

    primeFactors(number);

    return 0;
}