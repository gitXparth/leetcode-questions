class Solution {
public:
    void reverseString(vector<char>& s) {
        string res;
        for(int i = s.size()-1;i>=0;i--){
            res += s[i];
        }
        
        for (int i = 0; i < s.size(); i++) {
            s[i] = res[i];}
    }
};