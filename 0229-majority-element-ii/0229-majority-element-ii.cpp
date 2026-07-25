class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        int cnt =0;
        for(int i =0;i<n;i++){
            int cnt =0;
            for(int j = i;j<n;j++){

                if(nums[j]==nums[i]){
                    cnt += 1;

                }
            }
           // here we are cheking if the count value is greater than floor value or not if its true than we will check if its already present or not;
                if (cnt>(n/3)){
                    if(res.size()==0||nums[i]!=res[0]){
                        res.push_back(nums[i]);
                    }}
                
                if(res.size()==2){
                    if(res[0]>res[1]){
                        swap(res[0],res[1]);
                    }
                    break;
                }}
           
                return res;
           
    }
};
        
        

