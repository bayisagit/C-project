#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  string name;
  int numb;
  vector<int> elements;

  cout << "What is your name? ";
  getline(cin, name);
  cout << "How many elements do you want to enter? ";
  cin >> numb;

  cout << "Enter the elements: ";
  for (int i = 0; i < numb; i++) {
    int element;
    cin >> element;
    elements.push_back(element);
  }

  ofstream outFile("frequent.txt");
  for (int element : elements) {
    outFile << element << " ";
  }
  outFile.close();

  ifstream inFile("frequent.txt");
  vector<int> newElements;
  int element;
  while (inFile >> element) {
    newElements.push_back(element);
  }
  inFile.close();

  cout << "Hi " << name << ", you have entered the following elements: ";
  for (int element : newElements) {
    cout << element << " ";
  }
  cout << endl;


  int frequency = 0;
  int frequentElement = -1;
  for (int element : newElements) {
    int count = 0;
    for (int otherElement : newElements) {
      if (element == otherElement) {
        count++;
      }
    }
    if (count > frequency) {
      frequency = count;
      frequentElement = element;
    } }
  int nonFrequency = newElements.size();
  int nonFrequentElement = -1;
  for (int element : newElements) {
    int count = 0;
    for (int otherElement : newElements) {
      if (element == otherElement) {
        count++;
      }}
    if (count < nonFrequency) {
      nonFrequency = count;
      nonFrequentElement = element;
    }}
  cout << "The first frequent element is " << frequentElement << endl;
  cout << "The first non-frequent element is " << nonFrequentElement << endl;

  return 0;
}
