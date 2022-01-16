class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        for (int i = 0; i < arr.size(); i++) {
            
            // last element, then replace with -1
            if (i == arr.size()-1) {
                
                arr[i] = -1;
               
             // if not then get the maximum element on it's right side 
            } else {
                
                arr[i] = *max_element(arr.begin() + i + 1, arr.end());
                
            }
        }
        
        return arr;
        
    }
};
