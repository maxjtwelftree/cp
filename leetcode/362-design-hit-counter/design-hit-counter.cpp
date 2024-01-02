class HitCounter {
public:
    std::map<int, int> hit_map{};
    
    void hit(int timestamp) {
        hit_map[timestamp]++;
    }
    
    int getHits(int timestamp) {
        auto hit_tacker = 0;

        for (const auto& [x, y] : hit_map)
            if (x > timestamp - 300 && x <= timestamp) 
                hit_tacker += y;

        return hit_tacker;
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */