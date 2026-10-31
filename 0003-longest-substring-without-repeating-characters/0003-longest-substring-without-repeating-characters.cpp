class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n = s.size();
        int right= 0;
        int left= 0;
        int max_len = 0;
        while(right<n){
            if(st.find(s[right])  ==  st.end()){
                max_len = max(max_len, right - left + 1);
                st.insert(s[right]);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return max_len;
      
    }
};