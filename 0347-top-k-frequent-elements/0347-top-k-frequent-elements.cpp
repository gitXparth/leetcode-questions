class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        //count frequency using this loop-->parth mishra.
        for(int num:nums){
            freq[num]++;

        }
        //bucket to store frequency.
        vector<vector<int>>bucket(nums.size() + 1);
        // place value into bucket.
        for(auto  it : freq){
            bucket[it.second].push_back(it.first);
           // first stores the element while second stores the bucket value,
        }
        vector<int>ans; //initialization.
        //traverse from high freq to loq freq.
        for (int i=bucket.size()-1;i>0 && ans.size()<k;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
                if(ans.size() == k)
                return ans;
            }
        }

        return ans;
    }
};