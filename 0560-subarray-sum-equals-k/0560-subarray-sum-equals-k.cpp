class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            int currsum = 0;
            for(int j=i;j<n;j++){

                currsum += nums[j];
                count  += (currsum==k);
            }
        }
        return  count;
    }
};