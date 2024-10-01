#include <iostream>
using namespace std;

int sum(int n);
int main(){

    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int result=sum(n);
    cout<<result;


    return 0;

}
int sum(int n){
    if (n>1)
        return n+sum(n-1);
        else
        return 1;

}


