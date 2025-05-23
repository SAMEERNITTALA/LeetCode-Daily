class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // Keep track of $5 and $10 bills
        
        for (int bill : bills) {
            if (bill == 5) {
                five++; 
            } 
            else if (bill == 10) {
                if (five > 0) {
                    five--; 
                    ten++;  
                } 
                else {
                    return false;
                }
            } 
            else { 
                if (ten > 0 && five > 0) {
                    ten--; 
                    five--; 
                } 
                else if (five >= 3) {
                    five -= 3; 
                } 
                else {
                    return false; 
                }
            }
        }
        
        return true;
    }
};
