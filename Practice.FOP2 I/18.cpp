#include <iostream>
using namespace std;
struct MyBox{ int length, breadth, height; };
void dimension (MyBox M){
cout << M.length << "x" << M.breadth << "x";
cout << M.height << endl;
}
int main (){
MyBox B1 = {10, 15, 5}, B2, B3;
++B1.height; dimension(B1);
B3 = B1; ++B3.length;
B3.breadth++; dimension(B3);
B2 = B3; B2.height += 5;
B2.length--; dimension(B2);
return 0; }
