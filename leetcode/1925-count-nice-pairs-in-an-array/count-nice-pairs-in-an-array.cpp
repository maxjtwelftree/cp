class Solution {
public:
    int rev(int num) {
        int check = 0;
        while (num > 0) {
            check = check * 10 + num % 10;
            num /= 10;
        }
        return check;
    }

    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int ans = 0, n = nums.size();
        vector<int> a;
        unordered_map<int, int> map;

        for (int i = 0; i < n; i++) {
            a.push_back(nums[i] - rev(nums[i]));
        }

        for (int i : a) {
            // this is just incrementing ans when map[i] has been seen
            ans = (ans + map[i]) % MOD;
            map[i]++;
        }
        
        return ans;
    }
};