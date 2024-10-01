#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int k;
    double e;
    string c;
    cin>>k>>e;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,c);
    cout<<i+k<<'\n';
    cout<<d+e<<'\n';
    string concat = "HackerRank " + c;
    cout<<concat;
    return 0;
    }
