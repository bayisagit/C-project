#include <iostream>
using namespace std;
double products(int a,double b);
int main(){
    int n;
    double m;
    cout<<"enter the first and second number: "<<endl;
    cin>>n>>m;
    double product=products(n,m);
    cout<<"the product is: "<<product;


return 0;
}
double products(int a,double b)
{
    double pro=a*b;
    return pro;
}
