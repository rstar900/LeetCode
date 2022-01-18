class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        //copy elements of the array into new array called expected
        
        vector<int> expected;
        int length = heights.size();
        
        for (int i = 0; i < length; i++) {
            expected.push_back(heights[i]);  
        }
        
        //sort this new array
        sort(expected.begin(), expected.end());
        
        //compare elements with heights array, and if elements at index not match, then increase the counter
        
        int counter = 0;
        
        for (int i = 0; i < length; i++) {
            if (expected[i] != heights[i]) {
                counter++;
            }
        }
        
        return counter;
        
    }
};
