class StockPrice {
private:
    int current_time = 0;
    multiset<int> setting{};
    unordered_map<int, int> stock_mapping{};

public:
    StockPrice() {}
    
    void update(int timestamp, int price) {
        if (stock_mapping.count(timestamp)) {
            auto it = setting.find(stock_mapping[timestamp]);
            setting.erase(it);
        }

        current_time = max(current_time, timestamp);
        stock_mapping[timestamp] = price;
        setting.insert(price);
    }
    
    int current() {
        return stock_mapping[current_time];
    }
    
    int maximum() {
        return *setting.rbegin();
    }
    
    int minimum() {
        return *setting.begin();
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */