#include <iostream>
#include <iomanip>
using namespace std;
float sum(int a,int b);
void sub(int x,int y);
float mult(int num,int nums);
int main(){
    int x,y,a,b,num,nums;
    cout<<"this is a test for summation function wich is a returning type function.please enter the two number "<<endl;
    cin>>x>>y;
    cout<<"the result is: "<<sum(x,y)<<endl;
    cout<<setfill('*')<<setw(50)<<"\n\n";
    cout<<"this is a test for substraction function wich is a returning type function.please enter the two number "<<endl;
    cin>>a>>b;
     sub(a,b);
    cout<<setfill('*')<<setw(50)<<"\n\n";
    cout<<"this is a test for multplication function wich is a returning type function.please enter the two number "<<endl;
    cin>>num>>nums;
    cout<<"the result is: "<<mult(num,nums)<<endl;

return 0;
}
float sum(int a,int b){
  return a+b;
}
void sub(int x,int y){
float result = x-y;
cout<<"the result is: "<<result<<endl;
}
float mult(int num,int nums){
return num*nums;
};
