class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //greedy aproach;
        int maxProfit =0;
       
       int minPrice = INT_MAX;
       for(int price : prices){
        if(price<minPrice){
            minPrice = price;
        }
        else{
              maxProfit = max(maxProfit,price - minPrice);
        }
       }
      
          return maxProfit;
    }
};