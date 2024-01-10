struct Solution {
    [[nodiscard]] bool canArrange(vector<int>& arr, int k) const {
        unordered_map<int_least32_t,int_least32_t> map{};
        int_least32_t value = 0;

        for (auto& x : arr) {
            x %= k;  
            value = (x+k) % k;
            map[value] += 1; 
        }

        for (auto [first, second] : map) {
            if(first == (k - first) % k && map[first] & 1) return false; 
            if(map[first] != map[(k-first)%k]) return false;
        }
        
        return true;
    }
};