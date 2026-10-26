
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       unordered_map<int,int>mp;
       for(int i = 0;i<arr.size();i++){
        int cmt= target - arr[i];

    
       if(mp.find(cmt)!=mp.end()){
        return {mp[cmt],i};
       }
       mp[arr[i]]=i;
       }
       return {};
    }


};
