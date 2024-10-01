#include <iostream>
using namespace std;
void grades(int mark[],int &n,char grade[],int value[]){
    string name;
    cout<<"enter your name: ";
    cin>>name;
    cout<<name<<" how many subjects do you take: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the mark of "<<i+1<<":";
        cin>>mark[i];
        if (mark[i]>90){
            grade[i]= 'A';
            value[i]=4;
        }
        else if (mark[i]>80){
            grade[i]= 'B';
            value[i]=3;
        }
        else if (mark[i]>70){
            grade[i]= 'C';
            value[i]=2;
        }
        else
            {
            grade[i]= 'F';
            value[i]=0;
        }
    }
}
int main(){

    int n;
    double point;
    int mark[50];
    char grade[50];
    int value[50];
    grades(mark,n,grade,value);


    cout<<"mark"<<"\t\t"<<"grade"<<endl;
    for (int i=0;i<n;i++){
        cout<<mark[i]<<"\t\t"<<grade[i]<<endl;
    }
    char choise;
    cout<<"would you want see your GPA Y/N:";
    cin>>choise;
    if(tolower(choise) == 'y'){
    point=0;
    for (int i=0;i<n;i++){
        point+=value[i];
    }
   double gpa=point/n;
   cout<<"your GPA is: "<<gpa;
    }
   else
    cout<<"good bye";
  return 0;
}
