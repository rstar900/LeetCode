class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int evenPointer = 0; // keep track of even numbers
        int oddPointer = nums.size() - 1; // keep track of odd numbers
        
        // the odd and even pointers should not cross each other
        while (oddPointer > evenPointer) {
            
            // if found an even number, just increment even pointer
            if (nums[evenPointer] % 2 == 0)
                evenPointer++;
            
            // otherwise swap the number at even and odd pointer positions and decrement odd pointer
            else {
                int temp = nums[evenPointer];
                nums[evenPointer] = nums[oddPointer];
                nums[oddPointer--] = temp;
            }
            
        }
        
        return nums;
    }
};
