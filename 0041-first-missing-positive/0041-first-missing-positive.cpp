class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing=1;
        for(int num:nums){
            if(num<missing){
                continue;
            }
            else if(num == missing){
                missing++;
            }
            else{
                return missing;
            }

        }   
         return missing;
        
    }
};