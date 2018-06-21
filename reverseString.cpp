class Solution {
public:
    string reverseString(string s) {
      string result = "";

        for(int i = s.length() - 1; i >= 0; i--){
            result.push_back(s[i]);
        }

        return result;  
    }
};
