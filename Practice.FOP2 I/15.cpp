#include <iostream>
using namespace std;

struct student {
    string name;
    int id;
    int marks[100];
    char grades[100];
};
void display(student *stud){
cout<<"name"<<'\t'<<"id"<<'\t'<<"mark"<<endl;
    cout<<stud->name<<'\t'<<stud->id<<'\t'<<stud->marks[0];
}
int main(){
    student stud;
    cout<<"enter the student name: ";
    cin>>stud.name;
    cout<<"enter the student id: ";
    cin>>stud.id;
    cout<<"enter the student mark: ";
    cin>>stud.marks[0];
    display(&stud);



return 0;
}
