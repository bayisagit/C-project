#include <iostream>
#include <vector>
using namespace std;
int main(){
//vector declaration and initailization
vector<int> nums = {45, 85, 96, 23, 33,44,12};
//print the size of the vector and capacity
cout<<"Initial Size of Vector: "<<nums.size()<<endl;
cout<<"Capacity of Vector: "<<nums.capacity()<<endl;
//print vector elements using iterators
cout << "\nOutput from begin and end: ";
vector <int>:: iterator a;
for (a = nums.begin(); a != nums.end(); ++a)
cout << *a << " ";
cout << "\nOutput from cbegin and cend: ";
for (auto a = nums.cbegin(); a != nums.cend(); ++a)
cout << *a << " ";
nums.pop_back();
cout<<"\nSize of Vector: "<<nums.size()<<endl;
for (int a = 0; a < nums.size(); a++)
cout << nums[a] << " ";
nums.clear();
cout << "\nSize after clear(): " << nums.size();
if (nums.empty() == false)
cout << "\nVector is not empty";
else
cout << "\nVector is empty";
vector<int> item ={1,2,3,4,5,6};
cout<<"the size of the item is "<<item.size()<<endl;
cout<<"the capacity of the item is "<<item.capacity()<<endl;
for(auto ir=item.begin();ir!=item.cend();++ir)
    cout<<*ir<<" ";
cout<<endl;
item.insert(item.end()-1,7);
for(auto ir=item.begin();ir!=item.cend();++ir)
    cout<<*ir<<" ";

}

