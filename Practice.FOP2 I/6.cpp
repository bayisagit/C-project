#include <iostream>
using namespace std;
void readarray(int arr[],int sizes);
void displayarray(int arr[],int sizes);
double getaverage(int arr[]);

int main(){
    int balance[5];
    readarray(balance,5);
    displayarray(balance,5);
    double avg=getaverage(balance);
    cout<<"\n\naverage value is: "<<avg<<endl;


return 0;
}
void readarray(int arr[],int sizes){
for(int i=0;i<5;i++){
        cout<<"enter the "<<i+1<<"element: ";
    cin>>arr[i];
}
}
void displayarray(int arr[],int sizes){
for(int i=0;i<5;i++){

    cout<<arr[i]<<" ";
}
}
double getaverage(int arr[]){
    double sum=0;
for(int i=0;i<5;i++){
         sum+=arr[i];
}
return (double (sum)/5);
}
