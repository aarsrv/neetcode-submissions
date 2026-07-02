class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxGain = 0;
        int minPrice = prices[0];

        for(auto const& currPrice : prices){
            maxGain = max(maxGain, currPrice - minPrice);
            minPrice = min(minPrice, currPrice);
        }

        return maxGain;
    }
};
