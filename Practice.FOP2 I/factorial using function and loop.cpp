#include <iostream>
using namespace std;
int main(){
    int product;
    product = 1;
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for (int i=1;i<=n;++i){
        product*=i;
    }
    for (int i=1;i<=n;++i){

        cout<<i;
        if (i!=n)
        cout<<"*";
    }
    cout<<" = "<<product;
return 0;
}

