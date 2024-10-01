#include <iostream>
#include <vector>
using namespace std;

template <typename T>
int search(const vector<T>& val, const T& el) {
  for (int i = 0; i < val.size() - 1; i++) {
    if (el == val[i]) {
      return i;
    }
  }

  return -1;
}

template <typename T>
void sort(vector<T>& val) {
  for (int i = 0; i < val.size() - 1; i++) {
    for (int j = i + 1; j <= val.size() - 1; j++) {
      if (val[i] > val[j]) {
        T temp = val[i];
        val[i] = val[j];
        val[j] = temp;
      }
    }
  }
}

int main() {
  int n;
  cout << "How many values would you want to enter: ";
  cin >> n;
  vector<int> values(n);
  cout << "Enter the values: ";
  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }
  int element;
  cout << "Enter the element you want to search for: ";
  cin >> element;
  int index = search(values, element);
  if (index == -1) {
    cout << "There is no such element!" << endl;
  } else {
    cout << "The index of the number you have entered is: " << index << endl;
  }
  sort(values);
  cout << "Sorted values: ";
  for (int i = 0; i < n; i++) {
    cout << values[i] << " ";
  }
  cout << endl;
  return 0;
}
