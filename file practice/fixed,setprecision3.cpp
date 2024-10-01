#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
    fstream datafile;
    double num=23.234232;
    datafile.open("numfile.txt",ios::out);
    if(datafile.is_open()){
        cout<<"the file is opened successfully"<<endl;
        datafile<<num<<endl;
        datafile<<setprecision(3)<<endl;
        datafile<<num<<endl;
        datafile.close();
    }
    else
        cout<<"the file is not opened successfully"<<endl;
    const int row=3;
    const int col=3;
    int nums[row][col]={1,2,4,5,4,3,4,5,6};
    datafile.open("numfile.txt",ios::out | ios::app);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            datafile<<setw(8)<<nums[i][j];
        }
        datafile<<endl;
    }
    datafile.close();
    return 0;
}
