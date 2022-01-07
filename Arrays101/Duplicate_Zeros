class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int length = arr.size(); 
        
        for (int i = 0; i < length; i++) {
            
            // Check if the element is 0, shift elements by right and insert another 0 next to it
            if (arr[i] == 0 && (i+1) < length) {
                for (int j = length-2; j >= i+1; j--) {
                    arr[j+1] = arr[j];
                }
                arr[i+1] = 0;
                i++;
            }
            
        }
        
    }
};
