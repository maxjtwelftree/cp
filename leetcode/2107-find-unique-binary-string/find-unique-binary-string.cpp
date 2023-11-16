class Solution {
public:
    void dfs() {

    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";
        
        for (int i = 0; i < n; i++) {
            char current_check = nums[i][i];
            // 01, 10 
            ans += current_check == '0' ? '1' : '0';

            // 1, 10, 
        }

        return ans;


        // ? <- "01" -> "10" == 1 -> 10
        // <- "111" -> "011" ->"001"
        
    }
};