#include <iostream>
using namespace std;

int main() {
    // Set A and Set B
    int SetA[] = {13, 6, 2, 15, 9, 2, 7, 14, 6, 3, 10, 13, 13, 14, 12, 11, 8, 2, 6, 9, 8, 3};
    int SetB[] = {14, 9, 13, 14, 3, 4, 10, 13, 1, 10, 3, 8, 4, 5, 7, 2, 1, 3, 2, 15};

    // (a) Remove OddNumbers from SetA
    cout << "Set A without odd numbers: ";
    for (int i = 0; i < sizeof(SetA) / sizeof(int); i++) {
        if (SetA[i] % 2 == 0) {
            for(int j=0;j<i;j++){
                if(SetA[j]%2==0 && SetA[i]==SetA[j]){
                break;
                }
                else{
                    cout<<SetA[i]<<" ";
                }
            }
        }
    }
    cout << endl;

    // (b) Intersection of SetA and SetB
    cout << "Intersection of Set A and Set B: ";
    for (int i = 0; i < sizeof(SetA) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(SetB) / sizeof(int); j++) {
            if (SetA[i] == SetB[j]) {
                cout << SetA[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    // (c) SetA without SetB
    cout << "Set A without Set B: ";
    for (int i = 0; i < sizeof(SetA) / sizeof(int); i++) {
        bool found = false;
        for (int j = 0; j < sizeof(SetB) / sizeof(int); j++) {
            if (SetA[i] == SetB[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << SetA[i] << " ";
        }
    }
    cout << endl;

    return 0;
}