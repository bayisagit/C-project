#include <iostream>
#include <fstream>
using namespace std;
int main(){
ofstream outClientFile( "clients.txt", ios::out ); //creating ofstream object
//and opening a file
// check if unable to create file
if ( !outClientFile ) {
cout << "File could not be opened" << endl;
exit( 1 );
} // end if
int account;
char name[ 30 ], ch='y';
double balance;
cout << "Enter the account, name, and balance separate by space." << endl;
cout<< "Enter to end input.\n? ";

cin >> account >> name >> balance;
outClientFile << account << ' ' << name << ' ' << balance<< endl;

// end while
outClientFile.close(); // // close ofstream file
ifstream inClientFile( "clients.txt", ios::in); //creating ifstream object and
//opening a file
// check if unable to create file
if ( !inClientFile.is_open()) {
cout << "File could not be opened" << endl;
exit( 1 );
}
cout << "The User bank account details\n";
cout<< "Account \t Name\t Balance\n ";
while (inClientFile >> account >> name >> balance)
{
cout<< account << '\t' << name << '\t' << balance<< endl;
} // end while
inClientFile.close(); // close ifstream file

return 0;
} // end main
