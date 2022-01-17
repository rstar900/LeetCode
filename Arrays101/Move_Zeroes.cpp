class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        
        int numZeroes = 0;
        int writePosition = 0; //for keeping track of position to overwrite to 
        
        // we first count the number of zeroes
        for (int i = 0; i < arr.size(); i++)
            if(arr[i] == 0)
                numZeroes++;
        
        // now we overwrite the array with non-zero elements
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] != 0)
                arr[writePosition++] = arr[i];
        
        // and at the end, we write zeroes to the end of the array
        for (; writePosition < arr.size(); writePosition++)
            arr[writePosition] = 0;
    }
};
