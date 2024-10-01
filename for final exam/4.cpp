#include <iostream>
#include <string>
using namespace std;
int occur(string str,char c){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==c){
            count++;
        }
    }
    return count;
}
int main(){
    string str;
    char c;
    cout<<"enter the string:";
    getline(cin,str);
    cout<<"enter the character:";
    cin>>c;
    int num=occur(str,c);
    cout<<"the character "<<c<<" appears "<<num<< " times in the string "<<endl;

    return 0;
}