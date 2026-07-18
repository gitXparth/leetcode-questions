class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0};
        // count frequency from here--->by parth mishra
        for (int i=0;i<nums.size();i++){
            count[nums[i]]++;
        
        }
        int index = 0;
        // this loop is for counting 0 (red) and putting it into nums array.
        for(int i =0;i<count[0];i++){
            nums[index++] =0;
         }   
        // for 1. (white)
        for (int i=0;i<count[1];i++){
            nums[index++] = 1;
        }
        // for 2 (blue)

        for(int i = 0; i<count[2]; i++){
        nums[index++] = 2;
        }
    } 
};