class CustomStack {
private:
    std::vector<int> stacking;
    std::size_t size;
public:
    CustomStack(std::size_t maxSize) : size(maxSize) {}
    
    void push(int x) {
        if (stacking.size() < size) stacking.push_back(x);
    }
    
    int pop() {
        if (stacking.size() == 0) return -1;
        else {
            int topElement = stacking.back();
            stacking.pop_back();
            return topElement;
        }
    }
    
    void increment(int k, int val) {
        for (std::size_t i = 0; i < std::min(static_cast<std::size_t>(k), stacking.size()); ++i) {
            stacking[i] += val;
        }
    }
};
