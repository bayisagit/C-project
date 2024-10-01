#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    int mid,project,final1,total;
    file.open("cpp,txt",ios ::out);
    if (file.is_open()){
        cout<<"the file has been opened successfully for output\n";
        cout<<"enter the values for mid,projec and final\n";
        cin>>mid>>project>>final1;
file<<mid<<'\t'<<project<<'\t'<<final1;


    file.close();
    }
    else {
        cout << "Error opening the file for output.\n";
        return 1;
    }
    file.open("cpp,txt",ios::in);
    int x,y,z;
    if(file.is_open()){
        cout<<"the file has been opened  successfully for input\n";
        file>>x>>y>>z;
        total=x+y+z;
        cout<<"the value fetched from the file are:"<<x<<'\t'<<y<<'\t'<<z;
        cout<<"\n the sum of the three values is: "<<total;
        file.close();
        }
        else {
        cout << "Error opening the file for input.\n";
        return 1;

    }

return 0;
}
