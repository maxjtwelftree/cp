class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        long long ans = (skill[0] * skill[n - 1]);
        int target = skill[0] + skill[n - 1];

        for (int i = 1, j = n - 2; i < j; i++, j--) {
            int sum = skill[i] + skill[j];
            if (sum != target) {
                return -1;
            }
            long long prod = skill[i] * skill[j];
            ans += prod;
        }
        return ans;
    }
};