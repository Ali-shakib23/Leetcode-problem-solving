#include <iostream>
#include <algorithm>
#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
    
    string m=to_string(x);
    for (int i=0;i<m.size();i++){
        if (m[i]!=m[m.size()-i-1]){
            return false;
        }

    }
    return true;
    }
};
