class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // if 0 size array, no need to do anything
        if (nums.size() == 0) 
            return 0;
        
        // keeping track of length and the index at which the current unique element is to be inserted on
        int length = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            
            // if the element is unique, put it in the final array 
            // since the array is sorted, non-unique elements will occur simultaneously after a unique one
            if (nums[i] != nums[i-1]) {
                nums[length++] = nums[i];
            }
        }
        
        return length;
    }
};
