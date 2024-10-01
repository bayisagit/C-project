#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream datafile;
    datafile.open("demon.txt",ios::in);
    if(datafile.fail()){
     cout<<"there is no such file"<<endl;
    }
    else
    cout<<"the file is already exists"<<endl;

    return 0;
}

