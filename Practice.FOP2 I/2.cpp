#include <iostream>
using namespace std;
struct Student {
char id[10];
float mark[5];
};
float avgMark(float sMark[]){
float total = 0;
for(int i = 0; i<5; i++)
total += sMark[i];
return (total/5);
}
int main() {
Student S1;
cout<<"Enter student marks:\n";
for(int i = 0; i<5; i++){
cout<<"Enter "<<i+1<<" Mark: ";
cin>>S1.mark[i];
}
cout<<"Average score: " <<avgMark(S1.mark)<<endl;
return 0;
}
