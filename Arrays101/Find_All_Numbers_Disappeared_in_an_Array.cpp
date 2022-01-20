class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        //array to be returned
        vector<int> returnedArray;
        
        //make an array to keep frequencies of range 1 to n;
        vector<int> frequencyArray;
        
        for (int i = 0 ; i <= nums.size(); i++) {
            frequencyArray.push_back(i);
            frequencyArray[i] = 0;
        }
        
        //count the number of times each element occurs and store it in frequencyArray
        for (int i = 0; i < nums.size(); i++) {
            frequencyArray[nums[i]]++;
        }
        
        //check if any element from 1 to n has frequency 0, if so store it in returnedArray
        for (int i = 1; i < frequencyArray.size(); i++) {
            if(frequencyArray[i] == 0) {
                returnedArray.push_back(i);
            }
        }        
        
        return returnedArray;
    }
};
