class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min=prices[0], max=prices[0];
        vector<int>sol;
        sol.push_back(max-min);
        
        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i]<=min)
            {
                min=prices[i];
                max=prices[i];
            }
            if(prices[i]>=max)
            {
                max=prices[i];
                sol.push_back(max-min);
            }
        }
        
        sort(sol.begin(), sol.end());
        
        return sol[sol.size()-1];
    }
};