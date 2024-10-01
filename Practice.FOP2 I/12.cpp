#include <iostream>
using namespace std;
 int firstnum=22;
 void display(int &n);
 int main() {
 int firstnum =20;
 cout<<"\nthe value of firstnum is "<<firstnum<<endl;
 display(firstnum);
 return 0;
 }
void display(int &n) {
 cout<<"the value of first num is now "<<firstnum<<endl;

 }
