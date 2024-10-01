#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;
string convertToWord(int digit);
void count_digit(int m){
    int counts=0;
    while(m!=0){
        m=m/10;
        counts++;
    }
    cout<<"the numbers of digits is: "<<counts<<endl;
}
void print_reverse(int m){
    int revers=0;
    int temp=m;
    while(temp!=0){
        int digit=temp%10;
        revers=revers*10+digit;
        temp=temp/10;
    }
    cout<<"the reversed one is: "<<revers<<endl;
}
void first_last(int m){
    int last_digit=m%10;

    while(m>=10){
        m=m/10;
    }
    int first_digit=m;
    cout<<"first digit"<<'\t'<<"last digit"<<endl;
    cout<<first_digit<<setw(16)<<last_digit<<endl;
    int sum=(first_digit+last_digit);
    cout<<"the sum of the first and last is: "<<sum<<endl;

}
void swapFirst_and_last(int m) {
    int last_digit = m % 10;
    int first_digit = 0;
    int temp = m;
    int an=temp;

    while (temp != 0) {
        first_digit = temp % 10;
        temp = temp / 10;
    }

    int power_of_10 = 1;
    while (m >= 10) {
        m = m / 10;
        power_of_10 *= 10;
    }

    int swapped_number = last_digit * power_of_10;
    swapped_number += an % power_of_10;
    swapped_number -= last_digit;
    swapped_number += first_digit;

    cout << "Original number: " << an << endl;
    cout << "Swapped number (first and last): " << swapped_number << endl;
}
void sum(int m){
    int sum=0;
    while(m!=0){
        int x=m%10;
        sum+=x;
        m=m/10;
    }
    cout<<"the sum of the digit is: "<<sum<<endl;
}
 void is_palindrome(int m){
    int an=m;
    int revers=0;
    int temp=m;
    while(temp!=0){
        int digit=temp%10;
        revers=revers*10+digit;
        temp=temp/10;
    }
    if(revers==m){
        cout<<"the number is palindrome!"<<endl;
    }
    else
    cout<<"the number is not palindrome!"<<endl;
 }
void digitFrequency(int number) {
    int frequency[10] = {0};

    while (number != 0) {
        int digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }

    cout << "Frequency of digits:" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] != 0) {
            cout << i << ": " << frequency[i] << endl;
        }
    }
}
void sort_digit(int m){
    int counts=0;
    while(m>0){
        int smallestdigit=9;
        int temp=m;
        while(temp>0){
            int digit=temp%10;
            if(digit<smallestdigit){
                smallestdigit=digit;
            }
            temp/=10;
        }
        counts=counts*10+smallestdigit;
        m=m-smallestdigit;
        m/=10;
    }
    int n=counts;
    cout<<"the sorted element is: "<<n<<endl;
}
void printSortedDigitsInWords(int number) {
    int frequency[10] = {0};
    int temp=number;

    while (temp != 0) {
        int digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

    cout << "Sorted digits (in words): ";

    for (int i = 0; i <= 9; i++) {
        while (frequency[i] > 0) {
            cout << convertToWord(i) << " ";
            frequency[i]--;
        }
    }

    cout << endl;
}

string convertToWord(int digit) {
    switch (digit) {
        case 0:
            return "zero";
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "";
    }
}

int main(){
    int m;
    cout<<"enter the number: ";
    cin>>m;
    count_digit(m);
    print_reverse(m);
    first_last(m);
    swapFirst_and_last(m);
    sum(m);
    is_palindrome(m);
    digitFrequency(m);
    sort_digit(m);
    printSortedDigitsInWords(m);



    return 0;
}
