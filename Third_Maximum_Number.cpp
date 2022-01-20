class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        // the first, second and third largest numbers
        int max_1, max_2, max_3;
        max_1 = max_2 = max_3 = INT_MIN;
        
        //track indexes of 2nd and 3rd largest as they could be INT_MIN (-2147483648) (edge case)
        int ind_2 = -1, ind_3 = -1;
        
        // find first maximum number
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= max_1) {
                max_1 = nums[i];
            }
        }
        
        // find second maximum number
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= max_2 && nums[i] != max_1) {
                max_2 = nums[i];
                ind_2 = i;
            }
        }
        
        // if no 2nd largest number, no need to look for 3rd one, just return 1st maximum
        if (ind_2 == -1)
            return max_1;
        
        // if found 2nd, check for 3rd one
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= max_3 && nums[i] != max_1 && nums[i] != max_2) {
                max_3 = nums[i];
                ind_3 = i;
            }
        }
        
        // if found 3rd maximum return it, else return 1st one
        if(ind_3 != -1) {
            return max_3; 
        }
        
        return max_1;
        
    }
};
