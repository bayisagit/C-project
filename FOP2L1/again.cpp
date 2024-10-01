#include <iostream>
using namespace std;

int sum(int a){
     int sum=0;
    for (int i=1;i<=a;i++){
       sum+=i;
    }
    return sum;

}

void halfed(int a,double& half){
     int sum=0;
    for (int i=1;i<=a;i++){
       sum+=i;
    }
     half=sum/2;



}
int main(){
    int n;
    double half;
    cout<<"enter your number"<<endl;
    cin>>n;
    int total=sum(n);
    cout<<"the total sum is: "<<total;
    halfed(n,half);
    cout<<"\n the half of the number is: "<<half;



return 0;
}
