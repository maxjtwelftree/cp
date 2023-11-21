class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
      string lets_go = accumulate(word1.begin(), word1.end(), string());
      string lets_go_now = accumulate(word2.begin(), word2.end(), string());
      if (lets_go == lets_go_now) {
        return true;
      }

      return false;
    }
};