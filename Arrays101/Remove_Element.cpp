class Solution {

private:
    
    // function to delete element at the given position
    void deleteElement(vector<int>& nums, int pos, int length) {
        
        // if it is the last element, no need to do anything as it can be overwritten
        if (pos == length-1)
            return;
      
        // otherwise, shift elements to their left towards the deleted position.
        else {
            for (int i = pos+1; i < length; i++) {
                nums[i-1] = nums[i];
            }
        }
        
    }
    
public:
    int removeElement(vector<int>& nums, int val) {
        
        int length = nums.size();
        int i = 0;
        
        while (i < length) {
            
            // if val is found at position i, delete it and decrement length otherwise increment i
            if (nums[i] == val) {
                deleteElement(nums, i, length--);
                
            } else {
                i++;
            }
            
        }
        
        return length;
    }
};
