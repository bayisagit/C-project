#include <iostream>
using namespace std;

int sum(int a);
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int total=sum(n);
    cout<<"the sum is: "<<total;

return 0;
}
int sum(int a){
    if (a>1)
        return a+sum(a-1);

        else
        return 1;

}

