struct LUPrefix {
    set<int>setting{};
    int max_prefix;
    LUPrefix(int n) : max_prefix(0) {}

    void upload(int id) {
        setting.insert(id);
        while (setting.count(max_prefix + 1)) {
            max_prefix++;
        }
    }
        
    [[nodiscard]] int longest() {
        return max_prefix;
    }
};