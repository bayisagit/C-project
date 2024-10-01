#include <iostream>
using namespace std;
/***Structure definition***/
//declare a structure
struct part{
int modelnum;
int partnum;
float cost;
};
/*** End of Structure ***/
int main(){
//define a structure variable
//give values to structure members
part part1;
part1.modelnum = 6244;
part1.partnum = 373;
part1.cost = 217.55F;
//display structure members
cout<<"Model: "<< part1.modelnum;
cout<<"\nPart: " << part1.partnum;
cout<<"\nCosts $"<<part1.cost << endl;
return 0;
}

