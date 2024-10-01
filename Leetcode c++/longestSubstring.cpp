#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
dpublic:
    int lengthOfLongestSubstring(string s) {
        int maxs=0;
        int left=0;
        int n=s.length();
        unordered_set<char> charset;
        for(int r=0;r<n;r++){
            if(charset.count(s[r])==0){
                charset.insert(s[r]);
                maxs=max(maxs,r-left+1);
            }
            else{
                while(charset.count(s[r])){
                    charset.erase(s[left]);
                    left++;
                }
                charset.insert(s[r]);
            }
        }
    return maxs;
      
    }
};
int main(){
    Solution sol;
    string s;
    cin>>s;
    int result = sol.lengthOfLongestSubstring(s);
    cout << "The length of the longest substring without repeating characters is: " << result << endl;

    return 0;
}