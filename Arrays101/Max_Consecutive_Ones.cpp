class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxOnes = 0;
        int ones = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] == 0) {
                
                if (ones > maxOnes) {
                    maxOnes = ones;
                }
                ones = 0;
                
            } else {
                ones++;
            }
        }
        
        if (ones > maxOnes) {
            maxOnes = ones;
        }
        
        return maxOnes;
        
    }
};
