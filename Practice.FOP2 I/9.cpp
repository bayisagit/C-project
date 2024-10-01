#include <iostream>
using namespace std;
int leap_year(int n){
    if((n%4==0 && n%100 != 0 ) || n%400 == 0){
        return 1;
    }
    else
        return 0;
}
int main(){
    int year;
    cout <<"enter the year: "<<endl;
    cin>>year;
    int result=leap_year(year);
    cout<<result;
return 0;
}
