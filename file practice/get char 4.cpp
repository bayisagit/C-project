#include <iostream>
#include <fstream>
using namespace std;
int main(){
         char n;

    fstream datafile;
     datafile.open("comp.txt",ios::out);
cout<<"enter the characters when you finished your senteces enter dot"<<endl;
     cin.get(n);


        while(n!='.'){
            datafile.put(n);
            cin.get(n);
        }
        datafile.put(n);
        datafile.close();
        return 0;
}

