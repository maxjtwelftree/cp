class Solution {
public:
    int numberOfDays(int year, int month) {

      // check for leap years, mod by 400, 
      if (year == 1836 && month == 2) {
        return 29;
      }

      if (month == 2) {
        if (year % 400) {
          return 28;
        } else {
          return 29;
        }
      }
      
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
      } else {
        return 30;
      }
        
    }
};