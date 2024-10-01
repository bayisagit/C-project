#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct employ{
    string id;
    string name;
    double gross_salary;
    double income_tax;
    double net_salary;
};
void calculate_net_salary(employ &employs){
    if(employs.gross_salary>=10000){
            employs.income_tax=employs.gross_salary*0.5;
        }
       else if(employs.gross_salary>=5000){
            employs.income_tax=employs.gross_salary*0.2;
        }
        else if(employs.gross_salary>=3000){
            employs.income_tax=employs.gross_salary*0.1;
        }
        else {
            employs.income_tax=0;
        }
        employs.net_salary=employs.gross_salary-employs.income_tax;



}
int main(){
    employ employs[50];
    int n;
    cout<<"how many employs do you want have? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"what is the Id of employee"<<i+1<<": ";
        cin>>employs[i].id;
        cout<<"what is the name: ";
        cin>>employs[i].name;
        cout<<"what is the gross_salary: ";
        cin>>employs[i].gross_salary;
        calculate_net_salary(employs[i]);
    }
    cout<<"employ details"<<endl;
    cout<<".........................................................."<<endl;
    cout<<"ID"<<setw(16)<<"NAME"<<setw(20)<<"NET SALALRY"<<endl;
    cout<<".........................................................."<<endl;
    for(int i=0;i<n;i++){
        cout<<employs[i].id<<setw(15)<<employs[i].name<<setw(15)<<employs[i].net_salary<<endl;
    }
    string choice;
    cout<<"would you want to find the employs with ID number  (yes/no): ";
    cin>>choice;
    if(choice=="yes"){
            bool found=false;
            string id;
    cout<<"enter the ID you want search for: ";
    cin>>id;
        for(int i=0;i<n;i++){
            if(employs[i].id==id){
                found = true;
                cout<<"employ details"<<endl;
    cout<<".........................................................."<<endl;
    cout<<"ID"<<setw(16)<<"NAME"<<setw(20)<<"NET SALALRY"<<endl;
    cout<<".........................................................."<<endl;
    cout<<id<<setw(16)<<employs[i].name<<setw(20)<<employs[i].net_salary<<endl;
    break;
            }
            if(!found){
                cout<<"there is no "<<id<<" id number employes!"<<endl;
            }
        }
    }
    else{
        cout<<"good bye"<<endl;
    }
return 0;
}
