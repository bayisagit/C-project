# include <iostream>
using namespace std;
struct student{
int roll_number;
int marks[5];
};
student usman;
int main(){
usman.roll_number = 101;
for(int i = 0; i < 5 ; i++)
usman.marks[i] = 1 + rand() % 100;
cout<<endl;
for(int i = 0; i < 5 ; i++)
cout << usman.marks[i] << endl;
return 0;
}
