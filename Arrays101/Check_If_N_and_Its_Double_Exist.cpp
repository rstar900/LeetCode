class Solution {
    
    bool found(int val, vector<int>& arr, int len, int idx) {
        
        // variables required for binary search
        int low = 0;
        int high = len - 1;
        int mid = (low + high) / 2;
        
        bool flag = false;
        
        while (high >= low) {
            
            // if the element exists at the current mid position
            if (arr[mid] == val) {
                flag = true; // value found but could be 0 and hence 2 * 0 = 0 so need to check the index
                break;
            }
            
            // if the element at mid is smaller than the required value  
            else if (arr[mid] < val)
                low = mid + 1;
            
            // if the element at mid is larger than the required value
            else 
                high = mid - 1;
            
            mid = (low + high) / 2;
        }
        
        // check if value found is not the same as the value whose double we are searching (basically to avoid 2 * 0 = 0 false alarm)
        if (idx == mid && flag)
            return false;
        
        else 
            return flag;
        
    }
    
public:
    bool checkIfExist(vector<int>& arr) {
        
        int len = arr.size();
        
        // sort the array
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < len; i++) {
            // if found the double
            if (found(2*arr[i], arr, len, i)) 
                return true;
        }
        
        //not found the double of any element
        return false;
    }
};
