class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        stringstream ss(path);
        string  word;
        while(getline(ss,word,'/')){
            if(word == ""||word == "."){
                continue;
            }
            if(word==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(word);
            }
        }
         string ans= "";
         while(!st.empty()){
            ans = "/" + st.top()+ans;
            st.pop();
         }
         if(ans == ""){
            return "/";
         }
         return ans;
    }
};