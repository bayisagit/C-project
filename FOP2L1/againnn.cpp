#include <iostream>
using namespace std;
int fib(int a);
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"the fiboanacci of the number is: "<<fib(n);


return 0;
}
int fib(int a){
    if (a==0 || a==1)
        return a;
    else
        return fib(a-1) + fib(a-2);

}
