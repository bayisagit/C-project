#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream datafile;
    datafile.open("demon.txt",ios::out);
    if(datafile.is_open()){
        cout<<"you have created the file demon.text succeessfully \n";
        datafile<<"chala\n";
        cout<<"chala\n";
        datafile<<"tola\n";
        cout<<"tola\n";
        datafile<<"anaan\n";
        cout<<"anaan\n";
        datafile.close();
        cout<<"the end of the file is "<<datafile.eof()<<endl;
    }
    else{
        cout<<"the file is not opened succeessfully!";
    }
    datafile.open("demon.txt",ios::out | ios::app);
    if (datafile.is_open()){
        cout<<"the file is opened again"<<endl;
        datafile<<"bayisa \n";
        datafile<<"bona \n";
        datafile<<"nafsi \n";
        datafile.close();
    }
    else
        cout<<"the file is not opened again successfully"<<endl;

    return 0;
}
