class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1){
            return true;
        }
        int i = 0;
        int j = s.length();
        while(i < j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if((isalpha(s[i]) && isdigit(s[j]) || (isdigit(s[i]) && isalpha(s[j])))){
                return false;
            }
            if(s[i] == s[j] || s[i] == s[j] - 32 || s[i] == s[j] + 32){
                i++;
                j--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
