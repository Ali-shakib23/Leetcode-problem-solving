class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for (int i=s.size()-1;i>=0;i--){
           if (count!=0 && s[i]==' '){
               return count ;
           }
            if (s[i]==' '){
                continue;
            }
            else{
            count++;
            }
        }
        return count;
    }
};
