class Solution {
    
    int numLength(int num) {
        
        int length = 0;
        
        do {
            length ++;
            num /= 10;
        }while (num != 0);
        
        return length;
        
    }
    
public:
    int findNumbers(vector<int>& nums) {
        
        int numEvenDigits = 0;
        
        for (int num : nums) {
            if (numLength(num) % 2 == 0)
                numEvenDigits++;
        }
        
        return numEvenDigits;
    }
};
