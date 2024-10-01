#include <iostream>
using namespace std;
void number(int &a){
    a=5;
    cout<<a<<endl;

}

int main(){

    int a=4;
    number(a);

    cout<<a;




return 0;}
