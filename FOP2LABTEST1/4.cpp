#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;

struct student{
    string name;
    int age;
    float salary;
};
template <typename T>
void (write_to_file(const vector<T>&val,const string& filename)){
    ofstream opens(filename);
    if(!opens.is_open()){
        cout<<"the file is not opened successfully!"<<endl;
        return;
    }
    for(const T& student : val){
        opens<<student.name<<student.age<<student.salary<<endl;
    }
    opens.close();

}
template <typename T>
void read_from_file(vector<T>& val,const string& filename){
ifstream opend(filename);
    if (!opend.is_open()) {
        cout << "The file is not opened successfully for reading from it!" << endl;
        return;
    }
    T element;
 while (opend >> element.name >> element.age >> element.salary) {
            val.push_back(element);
 }
        opend.close();

    }
int main(){
    vector<student>students;
    int n;
    cout<<"****************************************************************************"<<endl;
    cout<<"how many students you are going to enter:";
    cin>>n;
    cout<<"enter the name,age and salary of the student neatly! "<<endl;
    for(int i=0;i<n;i++){
        student student;
        cin>>student.name>>student.age>>student.salary;
        students.push_back(student);

    }
    write_to_file(students,"try");
    vector <student>students2;
    read_from_file(students2,"try");
    cout<<"************************************************************************************"<<endl;
    cout<<"\n employ data!"<<endl;
    for(const student & student : students){
        cout<<"first name is:"<<student.name<<endl;
        cout<<"age is:"<<student.age<<endl;
        cout<<"salary is:"<<student.salary<<endl;
    }



    return 0;
}
