class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // create empty HashSet
        unordered_set<int> mySet;

        // iterate over the array one by one
        for (int num : nums) {
            // if statement checks if we have seen the number in the HashSet
            // if we have we return true 
            if (mySet.count(num) > 0)
                return true;
            // now HashSet inserts that number we are iterating over if we 
            // have not seen it yet, and then continues iterating looping
            mySet.insert(num);
        }
        // if the loop completes without finding any duplicates it then returns false
        return false;
    }
};