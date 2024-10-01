#include <iostream>
#include <vector>

using namespace std;
template <typename T>
int searchs(const vector<T>& vec, const T& element) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == element) {
            return i;
        }
    }
    return -1;
}
template <typename T>
void sort(vector<T>& vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[i] > vec[j]) {
                swap(vec[i], vec[j]);
            }
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    vector<int> values(n);
    cout << "Enter the values: ";
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }
    int element;
    cout << "Enter the element to search for: ";
    cin >> element;

    int index = searchs(values, element);
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }
    sort(values);
    cout << "Sorted values: ";
    for (int b : values) {
        cout << b << " ";
    }
    cout << endl;
    return 0;
}

