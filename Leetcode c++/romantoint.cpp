#include <iostream>
#include <unordered_map>
using namespace std;
class solution{
public:
    int romantoint(string s){
        unordered_map<char,int> value={
            {'I',1},{'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500},{'M',1000}};  
        int result=0;
        int prev=0;
        for(int i=s.length()-1;i>=0;i--){
            int curr=value[s[i]];
            if(curr<prev){
                result-=curr;
            }
            else{
                result+=curr;
            }
            prev=curr;
        }
        return result;
    }
};
int main(){
    string m;
    cout<<"enter the roman symbol you want:";
    cin>>m;
    solution sol;
    int result=sol.romantoint(m);
    cout<<"the result of "<<m<<" to int is "<<result<<endl;
    return 0;
}