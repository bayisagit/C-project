#include <iostream>
#include <iomanip>
using namespace std;
struct student {
    int n;
    string name;
    int id;
    int subjectmark[50];
    string subjectgrade[50];
    string subjectname[50];
    int subjectresult[50];
};

int main(){
    int m;
    student student1[100];
    cout<<"how many students are you taking? ";
    cin>>m;
    for(int j=0;j<m;j++){

    cout<<"what is the name of student "<<j+1<<"? ";
    cin>>student1[j].name;
    cout<<"what is the id number of "<<student1[j].name<<"? ";
    cin>>student1[j].id;
    cout<<"how many subjects are you taking? ";
    cin>>student1[j].n;
    for(int i=0;i<student1[j].n;i++){
            cout<<"enter the name of the "<<i+1<<" subject: ";
            cin>>student1[j].subjectname[i];

            cout<<"enter the mark of "<<student1[j].subjectname[i]<<":";
            cin>>student1[j].subjectmark[i];
            if(student1[j].subjectmark[i]>90){
                student1[j].subjectgrade[i]="A+";
                student1[j].subjectresult[i]=4;
            }
           else if(student1[j].subjectmark[i]>80){
                student1[j].subjectgrade[i]="A";
                student1[j].subjectresult[i]=4;
            }
           else if(student1[j].subjectmark[i]>70){
                student1[j].subjectgrade[i]="B";
                student1[j].subjectresult[i]=3;
            }
            else if(student1[j].subjectmark[i]>60){
                student1[j].subjectgrade[i]="C";
                student1[j].subjectresult[i]=2;
            }
           else if(student1[j].subjectmark[i]>90){
                student1[j].subjectgrade[i]="D";
                student1[j].subjectresult[i]=1;
            }
            else {
                student1[j].subjectgrade[i]="F";
                student1[j].subjectresult[i]=0;

    }}
    cout<<"name"<<'\t'<<"Id"<<'\t'<<"subject Mark"<<'\t'<<"subject grade"<<'\t'<<"subject result"<<endl;
    cout<<student1[j].name<<'\t'<<student1[j].id<<endl;
    for(int i=0;i<student1[j].n;i++){
        cout<<student1[j].subjectname[i]<<setw(17)<<student1[j].subjectmark[i]<<setw(17)<<student1[j].subjectgrade[i]<<setw(16)<<student1[j].subjectresult[i]<<endl;
    }
    }
    return 0;
}
