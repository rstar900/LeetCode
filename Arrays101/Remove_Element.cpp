class Solution {
    
public:
    int removeElement(vector<int>& nums, int val) {
        
        int length = 0;
        int i = 0;
        
        while (i < nums.size()) {
            
            // only if the number at ith position is not val, we put it in the output array and increase length
            if (nums[i] != val) 
                nums[length++] = nums[i];
            
            i++;
        }
        
        return length;
    }
};
