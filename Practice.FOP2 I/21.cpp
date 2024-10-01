#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int hh, mm;
    stringstream ss(s);
    ss >> hh >> mm;

    string suffix = "AM";
    if (hh >= 12) {
      suffix = "PM";
      hh -= 12;
    }

    if (hh == 0) {
      hh = 12;
    }

    cout << hh << ":" << mm << " " << suffix << endl;
  }

  return 0;
}
