class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int prev = 0 , next = 1;
        bool couldBeMountain = false;
        
        while (next < arr.size()) {
            
            // if the previous and next element are equal, definitely not a mountain array
            if(arr[prev] == arr[next])
                return false;
            
            // If previous and next element are not equal and the next is decreasing,
            // come out of loop and check if the condition holds till the end (could be a mountain)
            else if(arr[next] < arr[prev]) {
                couldBeMountain = true;
                break;
            }
            
            // if those conditions are not true then definitely increasing (keep incrementing)
            prev++;
            next++;
        }
        
        // if it could be a mountain (decreasing from a point), check further
        if (couldBeMountain && prev != 0) {
            
            prev++;
            next++;
            
            //iterate till the end and if by any chance it is non-decreasing, terminate 
            while(next < arr.size() && arr[next] < arr[prev]){
                prev++;
                next++;
            }
            
            // if the check ran till the end without interrupting, then definitely a mountain
            if (next == arr.size())
                return true;
            
        }
        
        // if non of the checks pass, cannot be a mountain
        return false;
        
    }
};
